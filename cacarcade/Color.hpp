#pragma once

#include <cstdint>

namespace cacarcade {
    struct ColorCode {
        std::uint8_t r;
        std::uint8_t g;
        std::uint8_t b;
        std::uint8_t a;

        bool operator<(const cacarcade::ColorCode &other) const
        {
            if (this->r != other.r)
                return this->r < other.r;
            if (this->g != other.g)
                return this->g < other.g;
            if (this->b != other.b)
                return this->b < other.b;
            return this->a < other.a;
        }
    };

    namespace Color {
        constexpr ColorCode Black = {0x00, 0x00, 0x00, 0xFF};
        constexpr ColorCode White = {0xFF, 0xFF, 0xFF, 0xFF};
        constexpr ColorCode Blue = {0x00, 0x00, 0xFF, 0xFF};
        constexpr ColorCode Red = {0xFF, 0x00, 0x00, 0xFF};
        constexpr ColorCode Green = {0x00, 0xFF, 0x00, 0xFF};
        constexpr ColorCode Yellow = {0xFF, 0xFF, 0x00, 0xFF};
    };
};
