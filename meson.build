project('simple_gameboy', 'cpp',
  default_options: ['cpp_std=c++23', 'warning_level=3', 'buildtype=debug'])

build_deps = [dependency('sdl3', required: true)]

build_sources = files(
  'src/main.cpp'
)

build_headers = files(
  'src/main.hpp'
)

emu_executable = executable(
  'gb_emu',
  build_sources,
  dependencies : build_deps,
  cpp_args: ['-Wall', '-Wextra', '-Werror', '-pedantic-errors', '-Wconversion', '-Wsign-conversion']
)

test_deps = [dependency('catch2', fallback: ['catch2', 'catch2_with_main_dep'])]

test_sources = files(
  'tests/main_test.cpp'
)

test_executable = executable(
  'gb_emu_tests',
  test_sources,
  dependencies: test_deps
)

test('unit_tests', test_executable)