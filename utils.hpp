#ifndef UTILS_HPP
#define UTILS_HPP

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

std::string boolToString(const bool& boolean) {
    return boolean ? "true" : "false";
}

#endif // UTILS_HPP
