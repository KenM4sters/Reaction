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
    [[nodiscard]] constexpr bool IntersectsWith(AABB& other) const noexcept 
    {
        return (max.x >= other.min.x && min.x <= other.max.x) &&
            (max.y >= other.min.y && min.y <= other.max.y);
    }

    [[nodiscard]] constexpr glm::vec2 GetCenter() const noexcept 
    {
        return glm::vec2(0.5) * (min + max);
    }

    [[nodiscard]] constexpr float GetSurfaceArea() const noexcept 
    {
        return (max.x - min.x) * (max.y - min.y);
    }

    [[nodiscard]] constexpr glm::vec2 GetExtents() const noexcept 
    {
        return glm::vec2(0.5) * (max - min);
    }

    [[ndiscard]] constexpr bool Contains(AABB& other) const noexcept 
    {
        return min.x <= other.min.x 
            && min.y <= other.min.y 
            && other.max.x <= max.x 
            && other.max.y <= max.y;
    }

    constexpr void ExpandTo(AABB& newBounds) noexcept 
    {
        min = glm::min(min, newBounds.min);
        max = glm::max(max, newBounds.max);
    }

    constexpr void ExpandTo(glm::vec2& newBounds) noexcept
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

    glm::vec2 min;
    glm::vec2 max;
};

}

#endif   