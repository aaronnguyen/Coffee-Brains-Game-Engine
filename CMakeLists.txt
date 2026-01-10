cmake_minimum_required(VERSION 4.1)
project(CoffeeBrains LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(CoffeeBrains main.cpp
        src/logging.cpp
)

include(FetchContent)
FetchContent_Declare(
        spdlog
        GIT_REPOSITORY https://github.com/gabime/spdlog.git
        GIT_TAG v1.x
)
FetchContent_MakeAvailable(spdlog)

target_link_libraries(CoffeeBrains PRIVATE spdlog::spdlog)