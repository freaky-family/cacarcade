#pragma once

#include "IEvent.hpp"
#include "TileContainer.hpp"

namespace cacarcade {
    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void update(cacarcade::IEvent &event) = 0;
            virtual cacarcade::TileContainer getTiles() const = 0;
    };
}
