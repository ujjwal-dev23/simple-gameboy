project('simple_gameboy', 'cpp',
  default_options: ['cpp_std=c++23', 'warning_level=3', 'buildtype=debug'])

src_dir = 'src'
tests_dir = 'tests'

deps = [dependency('sdl3', required: true)]

sources = files(
  'src/main.cpp'
)

headers = files(
  'src/main.hpp'
)

emu_executable = executable(
  'gb_emu',
  sources,
  dependencies : deps,
  cpp_args: ['-Wall', '-Wextra', '-Werror', '-pedantic-errors', '-Wconversion', '-Wsign-conversion']
)