//
// Created by maxonzhao on 27/10/18.
//

#include "ai/primitive/primitive.h"
#include "dribble_primitive.h"

const std::string DribblePrimitive::PRIMITIVE_NAME = "Dribble Primitive";

DribblePrimitive::DribblePrimitive(unsigned int robot_id, const Point &dest,
                             const Angle &orientation, double rpm, bool small_kick_allowed)
        : robot_id(robot_id), dest(dest), final_orientation(orientation), rpm(rpm), small_kick_allowed(small_kick_allowed)
{
}

DribblePrimitive::DribblePrimitive(const thunderbots_msgs::Primitive &primitive_msg)
{
    validatePrimitiveMessage(primitive_msg, getPrimitiveName());

    robot_id      = primitive_msg.robot_id;
    double dest_x = primitive_msg.parameters.at(0);
    double dest_y = primitive_msg.parameters.at(1);
    dest          = Point(dest_x, dest_y);
    final_orientation   = Angle::ofRadians(primitive_msg.parameters.at(2));
    rpm = primitive_msg.parameters.at(3);
    small_kick_allowed = primitive_msg.parameters.at(4);
}


std::string DribblePrimitive::getPrimitiveName() const
{
    return PRIMITIVE_NAME;
}

unsigned int DribblePrimitive::getRobotId() const
{
    return robot_id;
}

std::vector<double> DribblePrimitive::getParameterArray() const
{
    std::vector<double> parameters = {dest.x() , dest.y(), final_orientation.toRadians(), rpm};

    return parameters;
}

std::vector<bool> DribblePrimitive::getExtraBitArray() const
{
    return std::vector<bool>(small_kick_allowed);
}
