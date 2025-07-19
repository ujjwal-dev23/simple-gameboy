project('simple_gameboy', 'cpp',
  default_options: ['cpp_std=c++23', 'warning_level=3', 'buildtype=debug'])

build_deps = [dependency('sdl3', required: true)]

build_sources = files(
  'src/main.cpp'
)

emu_executable = executable(
  'gb_emu',
  build_sources,
  dependencies : build_deps,
  cpp_args: ['-Wall', '-Wextra', '-Werror', '-pedantic-errors', '-Wconversion', '-Wsign-conversion']
)

# --- Tests ---

test_deps = [dependency('catch2', fallback: ['catch2', 'catch2_with_main_dep'])]

cart_test_sources = files(
  'tests/cartridge_tests.cpp',
  'src/cartridge/cartridge.cpp',
)

cart_test_executable = executable(
  'cartridge_test_runner',
  cart_test_sources,
  dependencies: test_deps
)

test('cartridge_tests', cart_test_executable)