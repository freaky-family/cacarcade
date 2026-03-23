#pragma once

#include "Tile.hpp"
#include <cstddef>
#include <utility>
#include <map>

namespace cacarcade {
    class TileContainer {
        public:
            std::map<std::pair<std::size_t, std::size_t>, Tile> _tiles;
            // First element is the width, second is the height
            std::pair<std::size_t, std::size_t> _dimension;
    };
}
