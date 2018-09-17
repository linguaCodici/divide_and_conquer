#include "long_int.h"

long_int::long_int(string in) {
    length = in.length();
    int_arr.reserve(length);
    for (auto& digit : in) {
        int_arr.push_back(digit);
    }
} // parse the input
