#include <iostream>
#include "lib.h"

#include <spdlog/spdlog.h>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");

    std::cout << "Hello, World!" << std::endl;

    logger->info("version {} was started", version());

    return 0;
}
