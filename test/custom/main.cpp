#include "tree.hpp"

#include <glm/glm.hpp>

#include <iostream>

int main(int argc, const char *const *const argv) 
{
    constexpr glm::vec2 min = glm::vec2(0.0, 0.0);
    constexpr glm::vec2 max = glm::vec2(10.0, 10.0);

    constexpr rct::AABB aabb = rct::AABB(min, max);
}