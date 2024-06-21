#include "tree.hpp"
#include <stdlib.h>


namespace rct 
{

explicit BVHTree::BVHTree() 
{
    mNodeCapacity = 64;
    mNodeCount = 0;
    mRoot = -1;

    mNodes = (BVHTreeNode*)malloc(mNodeCapacity * sizeof(BVHTreeNode));
    memset(mNodes, 0, mNodeCapacity * sizeof(BVHTreeNode));

    for(int i = 0; i < mNodeCapacity - 1; i++) 
    {
        mNodes[i].next = i + 1;
    }

    mNodes[mNodeCapacity - 1].next = -1;
}

BVHTree::~BVHTree() 
{
    free(mNodes);
}

constexpr void BVHTree::InsertNode(BVHTreeNode node) const noexcept
{
    
}

constexpr void BVHTree::Traverse() const noexcept
{

}

}