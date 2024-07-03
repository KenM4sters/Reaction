#ifndef REACTION_AABB_HPP
#define REACTION_AABB_HPP

#include <glm/glm.hpp>

namespace rct 
{

/**
 * @brief Holds the min and max vertices of a 2D axis-aligned bounding box used in the broad
 * phase of the collision detection process to determine if any two entities could possible 
 * be colliding with each other in the current frame.
 */
struct AABB final
{        
    [[nodiscard]] constexpr bool IntersectsWith(const AABB& other) const noexcept 
    {
        return (max.x >= other.min.x && min.x <= other.max.x) 
            && (max.y >= other.min.y && min.y <= other.max.y) 
            && (max.z >= other.min.z && min.y <= other.max.z);
    }

    [[nodiscard]] constexpr glm::vec3 GetCenter() const noexcept 
    {
        return glm::vec3(0.5) * (min + max);
    }

    [[nodiscard]] constexpr float GetSurfaceArea() const noexcept 
    {
        return (max.x - min.x) * (max.y - min.y) * (max.z - min.z);
    }

    [[nodiscard]] constexpr glm::vec3 GetExtents() const noexcept 
    {
        return glm::vec3(0.5) * (max - min);
    }

    [[ndiscard]] constexpr bool Contains(const AABB& other) const noexcept 
    {
        return min.x <= other.min.x 
            && min.y <= other.min.y 
            && min.z <= other.min.z
            && other.max.x <= max.x 
            && other.max.y <= max.y
            && other.max.z <= max.z;
    }

    constexpr void ExpandTo(const AABB& newBounds) noexcept 
    {
        min = glm::min(min, newBounds.min);
        max = glm::max(max, newBounds.max);
    }

    constexpr void ExpandTo(const glm::vec3& newBounds) noexcept
    {
        min = glm::min(min, newBounds);
        max = glm::max(max, newBounds);
    }

    [[nodiscard]] AABB& operator=(AABB&& other) noexcept 
    {
        min = std::move(other.min);
        max = std::move(other.max);
        return *this;
    }   

    glm::vec3 min;
    glm::vec3 max;
};

}

#endif   