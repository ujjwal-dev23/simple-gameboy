#include "cartridge.hpp"

#include <algorithm>
#include <fstream>

using namespace Cartridge;

void load_game_into_cart(const std::string rom_file_path) {
  std::fill(m_CartridgeMemory.begin(), m_CartridgeMemory.end(), 0);

  std::ifstream rom;
  rom.open(rom_file_path, std::ios::binary);
  if (!rom.is_open()) {
    // TODO: Implement some form of error handling
  }
  rom.read(reinterpret_cast<char *>(m_CartridgeMemory.data()),
           GAMEBOY_CART_SIZE);
  rom.close();
}