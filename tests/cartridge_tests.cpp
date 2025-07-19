#include <catch2/catch_test_macros.hpp>
#include <filesystem>
#include <fstream>
#include <string_view>

#include "../src/cartridge/cartridge.hpp"
#include "../src/constants.hpp"

// Generates a fake rom with repeating patterns of [0,1,2,3,...]
const std::array<BYTE, GAMEBOY_CART_SIZE> gen_fake_rom() {
  std::array<BYTE, GAMEBOY_CART_SIZE> fake_rom;
  for (size_t i = 0; i < GAMEBOY_CART_SIZE; ++i) {
    fake_rom[i] = static_cast<BYTE>(i % 256);
  }
  return fake_rom;
}

// Used to delete Test File when test case finishes
struct TestFileRemover {
  std::string_view filepath;

  TestFileRemover(std::string_view path) : filepath(path) {};

  ~TestFileRemover() { std::filesystem::remove(filepath); }
};

TEST_CASE("rom_loading_into_cart_correctly", "[cartridge][rom]") {
  Cartridge game_cart;

  const std::array<BYTE, GAMEBOY_CART_SIZE> fake_rom = gen_fake_rom();
  // removes test.gb when remover goes out of scope
  TestFileRemover remover("test.gb");

  std::ofstream test_file("test.gb", std::ios::binary);
  if (test_file.is_open()) {
    test_file.write(reinterpret_cast<const char*>(fake_rom.data()),
                    GAMEBOY_CART_SIZE);
  }
  test_file.close();

  game_cart.load_game_into_cart("test.gb");
  REQUIRE(game_cart.get_memory() == fake_rom);
}