/*
 * Copyright (c) 2008, Maxim Likhachev
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the University of Pennsylvania nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __MDP_H_
#define __MDP_H_

#include <cstdlib>
#include <cstdio>

#define EPS_ERROR 0.000001

//the maximum size of the heap
#define MAXSTATESPACESIZE 20000000

class CMDPSTATE;
class CMDPACTION
{

//data
public:
	int ActionID;
	int SourceStateID;
	vector<int> SuccsID;
	vector<int> Costs;
	vector<float> SuccsProb;
	void* PlannerSpecificData;

//constructors
public:
	CMDPACTION(int ID, int sourcestateid) 
	  {
		ActionID = ID;
		SourceStateID = sourcestateid;
		PlannerSpecificData = NULL;
	  };
	~CMDPACTION()
	{
		if(PlannerSpecificData != NULL)
		{
			SBPL_FPRINTF(stderr, "ERROR: state deletion: planner specific data is not deleted\n");
			throw new SBPL_Exception();
		}
	};

//functions
public:
	bool Delete();
	bool IsValid();
	void AddOutcome(int OutcomeStateID, int OutcomeCost, float OutcomeProb);
	int GetIndofMostLikelyOutcome();
	int GetIndofOutcome(int OutcomeID);
	bool DeleteAllOutcomes();

private:

//operators
public:
  void operator = (const CMDPACTION& rhsaction);


};


class CMDPSTATE
{
//data
public:
	int StateID;
	vector<CMDPACTION*> Actions;
	vector<int> PredsID;
	void* PlannerSpecificData;

//constructors
public:
	CMDPSTATE(int ID) 
	  {
		StateID = ID;
		PlannerSpecificData = NULL;
	  };
	~CMDPSTATE()
	{
		if(PlannerSpecificData != NULL)
		{
			SBPL_FPRINTF(stderr, "ERROR: state deletion: planner specific data is not deleted\n");
			throw new SBPL_Exception();
		}
	};

//functions
public:
	bool Delete();
	CMDPACTION* AddAction(int ID);
	bool ContainsPred(int stateID);
	bool AddPred(int stateID);
	bool RemovePred(int stateID);
	bool RemoveAllActions();
	CMDPACTION* GetAction(int actionID);

private:

//operators
public:

  void operator = (const CMDPSTATE& rhsstate);

};

class CMDP
{

//data
public:
	vector<CMDPSTATE*> StateArray;

//constructors
public:
	CMDP()
	  {
	  };
	~CMDP()
	{
	};

//functions
public:
  bool empty();
  bool full();
  //creates numofstates states. Their ids are their orderings for Original, Thresholded & Search MDPs
  bool Create(int numofstates);
  bool Delete();
  void Print(FILE* fOut);
  CMDPSTATE* AddState(int StateID);

private:





//operators
public:


};




#endif
