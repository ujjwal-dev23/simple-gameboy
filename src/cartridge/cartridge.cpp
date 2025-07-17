#include "cartridge.hpp"

#include <algorithm>
#include <fstream>

using namespace Cartridge;

void load_game_into_memory(std::string rom_file_name) {
  // Initialize Memory to 0s
  std::fill(m_CartridgeMemory.begin(), m_CartridgeMemory.end(), 0);
}