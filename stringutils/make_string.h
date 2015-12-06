//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_MAKE_STRING_H
#define POSAI_STRINGUTILS_MAKE_STRING_H

#include <sstream>
#include <type_traits>
#include <iomanip>

// TODO Fortify this function against locale-specific settings like thousand-digits separators.
/**
 * Converts the input number to a string with fixed precision.
 * The optional parameter determines the amount of decimal digits.
 * If this precision doesn't matter, prefer std::to_string.
 */
template<typename T>
typename std::enable_if<
    std::is_arithmetic<T>::value,
    std::string
>::type
num_to_string(T input, int precision = 0)
{
    std::ostringstream s("");
    s << std::fixed << std::setprecision(precision) << input;
    return s.str();
}

#endif //POSAI_STRINGUTILS_MAKE_STRING_H
