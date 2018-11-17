cmake_minimum_required(VERSION 3.12)
project(msg)

set(CMAKE_CXX_STANDARD 14)

add_executable(msg
        Ball.msg
        Circle2D.msg
        Field.msg
        Point2D.msg
        Primitive.msg
        PrimitiveArray.msg
        Robot.msg
        Team.msg)
