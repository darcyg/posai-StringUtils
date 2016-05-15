//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_SPECIAL_CASES_H
#define POSAI_STRINGUTILS_SPECIAL_CASES_H

#include "internal_defs.h"

namespace str
{

/**
 * Pads the given input string with leading zeroes until it's as long
 * as the given amount of digits.
 * This is equivalent to pad_front(dgt_str,digits,'0').
 */
string pad_digits(string const& dgt_str, size_t digits);

/**
 * Pads the given input string with the given pad character. If the string is shorter
 * than the given size, pad characters are added at the front until the string fits.
 */
string pad_front(string const& str, size_t characters, char pad=' ');

/**
 * Similar to pad_front, but adds the pad characters at the end of the string
 * instead of the front.
 */
string pad_back(string const& str, size_t characters, char pad=' ');

}

#endif //POSAI_STRINGUTILS_SPECIAL_CASES_H
