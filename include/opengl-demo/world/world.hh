#pragma once

#include <vector>

#include <opengl-demo/math.hh>
#include <opengl-demo/world/chunk.hh>
#include <opengl-demo/world/entity.hh>

namespace opengl_demo {
    struct world
    {
        void init();
        block get_block(const vector3i& loc) const;
        void set_block(const vector3i& loc, const block& block);
        std::vector<block> neighbors(const vector3i& loc, unsigned radius);

        entity player;
        std::unordered_map<vector3i, chunk, vector3i_hash> chunks;
    };
    using world_t = world;

    world generate_world();
}
