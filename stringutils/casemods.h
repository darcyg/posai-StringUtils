//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_CASEMODS_H
#define POSAI_STRINGUTILS_CASEMODS_H

#include <string>

/**
 * Converts to uppercase according to the current locale.
 */
std::string uppercase(std::string const& str);

/**
 * Converts to lowercase according to the current locale.
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

#endif //POSAI_STRINGUTILS_CASEMODS_H
