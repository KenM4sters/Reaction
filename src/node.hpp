#include "AABB.hpp"

#include <vector>

namespace rct 
{
struct BVHTreeNode final
{
    [[nodiscard]] constexpr bool IsLeaf() const noexcept 
    {
        return left == -1 && right == -1;
    }

    AABB aabb;
    
    int32_t left;
    int32_t right;

    int32_t next;

    void* rigidBody = nullptr;
};
}