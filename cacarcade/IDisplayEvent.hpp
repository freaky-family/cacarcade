#pragma once

#include "DisplayEventType.hpp"
namespace cacarcade {
    class IDisplayEvent {
        public:
            virtual DisplayEventType getType() const = 0;
            virtual void setType(DisplayEventType &event) = 0;
    };
}
