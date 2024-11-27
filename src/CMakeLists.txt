cmake_minimum_required(VERSION 3.5.0)

add_executable(compSimulation main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)
target_include_directories(compSimulation PUBLIC ${MY_INCLUDE_DIR})
