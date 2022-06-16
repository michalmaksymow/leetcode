#pragma once
#include <string>
#include <vector>
#include <sstream>

template<typename T>
std::string vectorToString(const std::vector<T>& vec) {
    std::stringstream ss;
    ss << '[';
    for (T i: vec)
        ss << i << ' ';
    ss << ']';

    return ss.str();
}

