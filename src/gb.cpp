#include "gb.hpp"

#include "constants.hpp"

void Emulator::Update() {
  int cycles_this_update{};
  while (cycles_this_update < Constants::MAXCYCLES) {
    /* Placeholder code
    int cycles {Execute_next_opcode()};
    cycles_this_update += cycles;
    UpdateTimers(cycles);
    UpdateGraphics(cycles);
    DoInterrupts();
    */
  }

  // RenderScreen();
}