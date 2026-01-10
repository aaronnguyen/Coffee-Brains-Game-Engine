//
// Created by Aaron on 1/10/2026.
//

#include "spdlog/spdlog.h"

void CORE_INFO(const char* msg) {
    spdlog::info(msg);
}


void CLIENT_ERROR(const char* msg) {
    spdlog::error(msg);
}

