#include "cartridge.hpp"

#include <algorithm>
#include <fstream>

const std::array<BYTE, GAMEBOY_CART_SIZE>& Cartridge::get_memory() const {
  return memory;
}

void Cartridge::load_game_into_cart(const std::string rom_file_path) {
  std::fill(memory.begin(), memory.end(), 0);

  std::ifstream rom;
  rom.open(rom_file_path, std::ios::binary);
  if (!rom.is_open()) {
    // TODO: Implement some form of error handling
  }
  rom.read(reinterpret_cast<char*>(memory.data()), GAMEBOY_CART_SIZE);
  rom.close();
}