#ifndef KATANA_COMMON_HPP
#define KATANA_COMMON_HPP

#include "Vector2.hpp"

#include <iostream>

namespace kt 
{

struct AABB 
{
    float minX;
    float maxX;
    float minY;
    float maxY;
};

struct Collider 
{
    AABB& aabb;
    float friction{0.2f};
    float resitution{0.5f};
    float inverseMass{1.0f};
};

struct RigidBody 
{
    float inverseMass{1.0f};
    Ess::Vector2 velocity{0.0f};
    Ess::Vector2 acceleration{0.0f};

    Collider* collider = nullptr;
    
    void* userData = nullptr;
};



}

#endif