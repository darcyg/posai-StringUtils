//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_CONVERSIONS_H
#define POSAI_STRINGUTILS_CONVERSIONS_H

#include <string>

namespace str{

/**
 * Returns uppercased input according to the current locale.
 */
std::string uppercase(std::string const& str);

/**
 * Returns lowercased input according to the current locale.
 */
std::string lowercase(std::string const& str);

/**
 * Returns the letters of the input string, discarding digits and special symbols.
 */
std::string letters(std::string const& str);

/**
 * Returns the digits of the input string, discarding everything else.
 */
std::string digits(std::string const& str);

}

#endif //POSAI_STRINGUTILS_CONVERSIONS_H
