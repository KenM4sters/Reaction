#include "tree.hpp"
#include <stdlib.h>


namespace rct 
{

explicit BVHTree::BVHTree() 
{
    mNodeCapacity = 64;
    mNodeCount = 0;
}

BVHTree::~BVHTree() 
{

}

void BVHTree::AddAABB(AABB& aabb, void* userData) const
{
    
}

void BVHTree::RemoveAABB() 
{

}

void BVHTree::Traverse() const
{

}

void BVHTree::Update() 
{

}

void BVHTree::InsertNode() 
{

}

void BVHTree::RemoveNode() 
{

}

}