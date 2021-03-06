#pragma once

#include "ai/world/ball.h"
#include "ai/world/field.h"
#include "ai/world/robot.h"
#include "ai/world/team.h"
#include "thunderbots_msgs/Ball.h"
#include "thunderbots_msgs/Field.h"
#include "thunderbots_msgs/Robot.h"
#include "thunderbots_msgs/Team.h"

namespace Util
{
    /**
     * Functions in this namespace provide functions that assist in converting between
     * a ROS message and its equivalent class
     */
    namespace ROSMessages
    {
        /**
         * Given a Ball message, constructs and returns a Ball object
         *
         * @param ball_msg The message containing the ball message data
         * @return A Ball object created with the given ball message data
         */
        Ball createBallFromROSMessage(const thunderbots_msgs::Ball& ball_msg);

        /**
         * Given a Robot message, constructs and returns a Robot object
         *
         * @param robot_msg The message containing the robot message data
         * @return A Robot object created with the given robot message data
         */
        Robot createRobotFromROSMessage(const thunderbots_msgs::Robot& robot_msg);

        /**
         * Given a Field message, constructs and returns a Field object
         *
         * @param field_msg The message containing the field message data
         * @return A Field object created with the given field message data
         */
        Field createFieldFromROSMessage(const thunderbots_msgs::Field& field_msg);

        /**
         * Given a Team message, constructs and returns a Team object
         *
         * @param team_msg The message containing the team message data
         * @return A Team object created with the given team message data
         */
        Team createTeamFromROSMessage(const thunderbots_msgs::Team& team_msg);
    }  // namespace ROSMessages
}  // namespace Util
