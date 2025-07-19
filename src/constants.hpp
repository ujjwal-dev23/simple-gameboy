#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <cstdint>

// Type aliases for the gameboy's data types for easier management
using BYTE = uint8_t;
using SIGNED_BYTE = int8_t;
using WORD = uint16_t;
using SIGNED_WORD = int16_t;

namespace Constants {
constexpr int GAMEBOY_CART_SIZE{0x200000};
constexpr int MAXCYCLES{69905};
constexpr int SCREEN_W{160};
constexpr int SCREEN_H{144};
constexpr int COLOR_SPACE{3};  // Denotes R,G,B
constexpr int MAIN_MEMORY_SIZE{0x10000};
};  // namespace Constants

#endif