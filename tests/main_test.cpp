#include <catch2/catch_test_macros.hpp>

TEST_CASE("Sample_test_case", "[example]") {
  int a = 1;
  int b = 1;
  REQUIRE(a == b);
}