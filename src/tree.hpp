#include "node.hpp"

namespace rct 
{

typedef uint32_t TreeSize;

class BVHTree final
{
public:
    explicit BVHTree();

    ~BVHTree();

    constexpr void InsertNode(BVHTreeNode node) const noexcept;

    constexpr void Traverse() const noexcept;

private:
    BVHTreeNode* mNodes = nullptr;

    TreeSize mNodeCapacity;
    TreeSize mNodeCount;
    int32_t mRoot;
};
}