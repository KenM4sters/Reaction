#ifndef KATANA_BROADPHASE_HPP
#define KATANA_BROADPHASE_HPP

#include "Common.hpp"
#include <vector>

namespace kt 
{

struct DynamicTreeNode 
{
    Collider& collider;
    uint32_t left;
    uint32_t right;
    uint32_t parent;
};

class IBroadPhase
{
public:
    IBroadPhase() {}
    virtual ~IBroadPhase() {}

    virtual void AddCollider(Collider* collider) = 0;
    virtual void RemoveCollider(Collider* collider) = 0;
    virtual void Update() = 0;

protected:
    std::vector<DynamicTreeNode*> mNodes{};
};

}

#endif