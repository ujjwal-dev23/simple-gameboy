#ifndef CARTRIDGE_H
#define CARTRIDGE_H

#include <string>
#include <vector>

#include "../constants/constants.hpp"

namespace Cartridge {
// Maximum Size of a Gameboy rom is 0x200000 bytes
std::vector<BYTE> m_CartridgeMemory(0x200000);

void load_game_into_memory(std::string rom_file_name);
}  // namespace Cartridge

#endif