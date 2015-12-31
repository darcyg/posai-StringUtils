//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_SPECIAL_CASES_H
#define POSAI_STRINGUTILS_SPECIAL_CASES_H

#include <string>

namespace str
{

/**
 * Pads the given input string with leading zeroes until it's as long
 * as the given amount of digits.
 */
std::string pad_digits(std::string const &dgt_str, size_t digits);

}

#endif //POSAI_STRINGUTILS_SPECIAL_CASES_H
