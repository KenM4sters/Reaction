#include "AABB.hpp"

#include <vector>

namespace rct 
{
struct BVHTreeNode final
{
    [[nodiscard]] constexpr bool IsLeaf() const noexcept 
    {
        return left == nullptr && right == nullptr;
    }

    constexpr void FattenAABB(const glm::vec3& margin) const noexcept 
    {
        aabb.ExpandTo(margin);
    }

    AABB aabb; 
    
    BVHTreeNode* parent = nullptr;
    BVHTreeNode* left = nullptr;
    BVHTreeNode* right = nullptr;

    void* userData = nullptr;
};
}
