/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2008, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/**
 * \file ManipulationTransforms.h
 *
 *
 *  \date Jun 28, 2010
 *  \author Jonathan Scholz
 */

#ifndef MANIPULATION_TRANSFORMS_ROS_H_
#define MANIPULATION_TRANSFORMS_ROS_H_

#include <ros/ros.h>
#include <LinearMath/btTransform.h>
#include <vector>

#include <tf_conversions/tf_kdl.h>

#include "manipulation_transforms/LoadInitialTransforms.h"
#include "manipulation_transforms/SetInitialTransforms.h"
#include "manipulation_transforms/MapObjectPoseToEffectors.h"
#include "manipulation_transforms/MapEffectorPosesToObject.h"
#include "manipulation_transforms/MapObjectTwistToEffectors.h"
#include "manipulation_transforms/MapEffectorTwistsToObject.h"
#include "manipulation_transforms/MapObjectTrajectoryToEffectors.h"
#include "manipulation_transforms/MapEffectorTrajectoriesToObject.h"
#include "manipulation_transforms/MapEffectorTrajectoriesToObject.h"

#include "manipulation_transforms/manipulation_transforms.h"


class ManipulationTransformsROS {
public:
	/**
	 * Default constructor for ManipulationTransformsROS
	 * If initialized with this constructor, initial grasp transforms
	 * must be provided manually through a service call to setInitialTransforms
	 */
	ManipulationTransformsROS(const std::string &reference_frame = "");

	/**
	 * @param name Namespace to prepend to the parameter nodehandle
	 */
	ManipulationTransformsROS(const std::string &reference_frame, const std::string &ns);

	/**
	 * @param obj_init_pose Transform from initial pose of object to reference frame
	 * @param effector_init_poses Transforms from initial pose of each effector to reference frame
	 */
	ManipulationTransformsROS(const std::string &reference_frame, geometry_msgs::PoseStamped &obj_init_pose, std::vector<geometry_msgs::PoseStamped> effector_init_poses);

	virtual ~ManipulationTransformsROS();
	void init_services(const std::string &ns = "");

	/**
	 * @brief Provides the service interface for setting grasp transforms as a service call
	 */
	bool setInitialTransforms(manipulation_transforms::SetInitialTransforms::Request &req,
			manipulation_transforms::SetInitialTransforms::Response &resp);

	/**
	 * @brief Provides the service interface for reloading grasp transforms from param server
	 */
	bool loadInitialTransforms(manipulation_transforms::LoadInitialTransforms::Request &req,
			manipulation_transforms::LoadInitialTransforms::Response &resp);

	/**
	 * @brief Provides the service interface to mapEffectorPosesToObject
	 */
	bool mapEffectorPosesToObject(manipulation_transforms::MapEffectorPosesToObject::Request &req,
			manipulation_transforms::MapEffectorPosesToObject::Response &resp);

	/**
	 * @brief Provides the service interface to mapObjectPoseToEffectors
	 */
	bool mapObjectPoseToEffectors(manipulation_transforms::MapObjectPoseToEffectors::Request &req,
			manipulation_transforms::MapObjectPoseToEffectors::Response &resp);

	/**
	 * @brief Provides the service interface to mapEffectorTwistsToObject
	 */
	bool mapEffectorTwistsToObject(manipulation_transforms::MapEffectorTwistsToObject::Request &req,
			manipulation_transforms::MapEffectorTwistsToObject::Response &resp);

	/**
	 * @brief Provides the service interface to mapObjectTwistToEffectors
	 */
	bool mapObjectTwistToEffectors(manipulation_transforms::MapObjectTwistToEffectors::Request &req,
			manipulation_transforms::MapObjectTwistToEffectors::Response &resp);

	/**
	* @brief Provides the service interface for getting full effector trajectories from an object trajectory
	*
	* The service response will include solutions for all effectors for any of the fields provided in the
	* sequence of trajectory points
	*/
	bool mapObjectTrajectoryToEffectors(manipulation_transforms::MapObjectTrajectoryToEffectors::Request &req,
			manipulation_transforms::MapObjectTrajectoryToEffectors::Response &resp);

	/**
	* @brief Provides the service interface for getting a full object trajectory from effector trajectories
	*
	* The service response will include solutions for the object for any of the fields provided in the
	* sequence of trajectory points
	*/
	bool mapEffectorTrajectoriesToObject(manipulation_transforms::MapEffectorTrajectoriesToObject::Request &req,
				manipulation_transforms::MapEffectorTrajectoriesToObject::Response &resp);

private:

	ros::NodeHandle param_nh_; /**< for reading parameters */
	ros::NodeHandle private_nh_; /**< for service advertisers */
	ManipulationTransforms solver_; /**< The solver object for computing new relative poses */

	/// Services for querying object and effector poses
	ros::ServiceServer effector_poses_to_object_service_;
	ros::ServiceServer object_pose_to_effectors_service_;
	ros::ServiceServer effector_twists_to_object_service_;
	ros::ServiceServer object_twist_to_effectors_service_;
	ros::ServiceServer effector_trajectories_to_object_service_;
	ros::ServiceServer object_trajectory_to_effectors_service_;
	ros::ServiceServer load_initial_transforms_service_;
	ros::ServiceServer set_initial_transforms_service_;

	std::string BASE_FRAME_; /**< The frame in which all initialization transforms are defined */
	int n_effectors_;

	tf::Transform obj_initial_pose_; /**< obj pose in base_footprint frame */
	std::vector<tf::Transform> effector_init_poses; /**< initial effector poses in BASE_FRAME */

	/**
	 * @brief Load rigid grasp transforms from parameter server
	 * @param nh Nodehandle to query for params
	 * @param n_effectors The number of effectors to look for
	 * @param warn Warn the user if params are not found
	 */
	bool loadParamServerTransforms(const ros::NodeHandle &nh);

	/**
	 * @brief Checks for availability of grasp transforms on the parameter server using local param nodehandle
	 * @param nh Nodehandle to query for params
	 * @param warn Warn the user if params are not found
	 * @return The number of effector transforms found on the parameter, with names matching
	 * "effector#_init_pose/position" and "effector#_init_pose/orientation".  Returns -1 if
	 *  no transform is found for the object matching "obj_init_pose/position" and "obj_init_pose/orientation"
	 */
	int checkForParamServerTransforms(const ros::NodeHandle &nh, bool warn = false);

};

#endif /* MANIPULATION_TRANSFORMS_ROS_H_ */
