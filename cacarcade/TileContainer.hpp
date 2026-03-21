#pragma once

#include "Tile.hpp"
#include <vector>

namespace cacarcade {
    class TileContainer {
        public:
            std::vector<Tile> _tiles;
            std::pair<std::size_t, std::size_t> _dimension;
    };
}
