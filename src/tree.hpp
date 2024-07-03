#include "node.hpp"

namespace rct 
{

typedef uint32_t TreeSize;

class BVHTree final
{
public:
    explicit BVHTree();

    ~BVHTree();

    void AddAABB(AABB& aabb, void* userData) const;

    void RemoveAABB();

    void Traverse() const;

    void Update();

private:

    void InsertNode();
    
    void RemoveNode();

    BVHTreeNode* mRoot = nullptr;

    std::vector<BVHTreeNode*> mInvalidNodes;

    TreeSize mNodeCapacity;
    TreeSize mNodeCount;
};
}