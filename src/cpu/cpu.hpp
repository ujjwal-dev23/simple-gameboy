#ifndef CPU_H
#define CPU_H

#include <array>

#include "../constants.hpp"

class Register_pair {
 private:
  BYTE lo;
  BYTE hi;

 public:
  Register_pair(BYTE hi_byte, BYTE lo_byte) : hi(hi_byte), lo(lo_byte) {};
  Register_pair(WORD word_value) {
    hi = word_value >> 8;
    lo = word_value & 0xFF;
  }
  BYTE get_value_hi() const;
  BYTE get_value_lo() const;
  WORD get_value_pair() const;
};

class Cpu {
 private:
  // screen_data[width][height][color]
  std::array<
      std::array<std::array<BYTE, Constants::COLOR_SPACE>, Constants::SCREEN_H>,
      Constants::SCREEN_W>
      screen_data;

  // Main memory of the CPU
  std::array<BYTE, Constants::MAIN_MEMORY_SIZE> rom;

  Register_pair RegisterAF{0x01B0};
  Register_pair RegisterBC{0x0013};
  Register_pair RegisterDE{0x00D8};
  Register_pair RegisterHL{0x014D};

  WORD program_counter{0x100};
  Register_pair StackPointer{0xFFFE};

 public:
  enum class Flags : BYTE {
    Z = 1 << 7,  // Zero Flag
    N = 1 << 6,  // Subtract Flag
    H = 1 << 5,  // Half Carry Flag
    C = 1 << 4,  // Carry Flag
  };
};

#endif