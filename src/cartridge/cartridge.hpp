#ifndef CARTRIDGE_H
#define CARTRIDGE_H

#include <array>
#include <string>

#include "../../include/constants.hpp"

class Cartridge {
 private:
  // Represents the memory on a Gameboy Catridge
  std::array<BYTE, GAMEBOY_CART_SIZE> memory;

 public:
  void load_game_into_cart(std::string rom_file_path);
  const std::array<BYTE, GAMEBOY_CART_SIZE>& get_memory() const;
};

#endif