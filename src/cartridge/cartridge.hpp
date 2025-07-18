#ifndef CARTRIDGE_H
#define CARTRIDGE_H

#include <string>
#include <vector>

#include "../constants/constants.hpp"

namespace Cartridge {

// Represents the memory on a Gameboy Catridge
std::vector<BYTE> m_CartridgeMemory(GAMEBOY_CART_SIZE);

void load_game_into_cart(std::string rom_file_path);
}  // namespace Cartridge

#endif