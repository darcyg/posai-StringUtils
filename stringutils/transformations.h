//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_REVERSE_H
#define POSAI_STRINGUTILS_REVERSE_H

#include <string>

/**
 * Returns the reversed input string.
 */
std::string reverse(std::string const& str);

/**
 * Returns the input string with all occurrences of pattern replaced by replacement.
 */
std::string substitute(std::string const& str, std::string pattern, std::string replacement);

#endif //POSAI_STRINGUTILS_REVERSE_H
