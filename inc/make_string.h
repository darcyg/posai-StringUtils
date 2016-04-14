//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_MAKE_STRING_H
#define POSAI_STRINGUTILS_MAKE_STRING_H

#include <sstream>
#include <type_traits>
#include <iomanip>
#include "version.h"
#include "internal_defs.h"

namespace str{

/**
 * Alias for a number being converted to a string.
 * Can only be used with arithmetic types.
 */
template<typename T>
using NumberString = typename std::enable_if<
    std::is_arithmetic<T>::value,
    string
>::type;

/**
 * NumberString restricted to integer types.
 */
template<typename T>
using IntegerString = typename std::enable_if<
    std::is_integral<T>::value,
    string
>::type;

// TODO Fortify this function against locale-specific settings like thousand-digits separators.
/**
 * Converts the input number to a string with fixed precision.
 * The optional parameter determines the amount of decimal digits.
 * If this precision doesn't matter, prefer std::to_string.
 */
template<typename T>
NumberString<T> num_to_string(T input, int precision = 0)
{
    std::ostringstream s("");
    s << std::fixed << std::setprecision(precision) << input;
    return s.str();
}

/**
 * Converts the input integer into a string containing its hexadecimal
 * representation with the 0x prefix; e.g. 42 becomes 0x2a.
 */
template<typename T>
IntegerString<T> hex(T input)
{
    std::ostringstream s("");
    s << "0x" << std::hex << input;
    return s.str();
}

/**
 * Converts the input integer into a string containing its binary
 * representation; e.g. 42 becomes 101010.
 * Boy, this is really recursive.
 */
template<typename T>
IntegerString<T> binary(T input)
{
    std::ostringstream s("");
    if (input<=1)
    {
        s << input;
        return s.str();
    }

    s << binary(input >> 1) << (input % 2);

    return s.str();
}

inline string versionString()
{
    return num_to_string(VERSION_MAJOR)+"."+num_to_string(VERSION_MINOR)+"."+num_to_string(VERSION_PATCH);
}

}
#endif //POSAI_STRINGUTILS_MAKE_STRING_H
