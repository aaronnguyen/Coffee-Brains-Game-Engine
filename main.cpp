#include <iostream>
#include <spdlog/spdlog.h>
#include "src/logging.h"


int main(int argc, char *argv[]) {
    std::cout << "Hello, world!" << '\n';
    spdlog::info("Hello, world! From spdlog.");
    CORE_INFO("Hello, world! From spdlog wrapper.");

    return 0;
}
