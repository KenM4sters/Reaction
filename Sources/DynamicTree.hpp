#ifndef KATANA_DYNAMIC_TREE_HPP
#define KATANA_DYNAMIC_TREE_HPP

#include "BroadPhase.hpp"

#include <iostream>

namespace kt 
{

class DynamicTree : public IBroadPhase 
{
public:
    DynamicTree();
    ~DynamicTree();

    virtual void AddCollider(Collider* collider) override;
    virtual void RemoveCollider(Collider* collider) override;
    virtual void Update() override;

    
};
}

#endif