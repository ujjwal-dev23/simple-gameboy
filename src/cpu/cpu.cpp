#include "cpu.hpp"

BYTE Register_pair::get_value_hi() const { return hi; }

BYTE Register_pair::get_value_lo() const { return lo; }

WORD Register_pair::get_value_pair() const { return ((hi << 8) | lo); }