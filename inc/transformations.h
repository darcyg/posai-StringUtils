//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_TRANSFORMATIONS_H
#define POSAI_STRINGUTILS_TRANSFORMATIONS_H

#include <string>

namespace str {

/**
 * Returns a reversed copy of the input string.
 */
std::string reverse(std::string const &str);

/**
 * Returns a copy of the input string with all occurrences of pattern replaced by replacement.
 */
std::string substitute(std::string const &str, std::string pattern, std::string replacement);

}

#endif //POSAI_STRINGUTILS_TRANSFORMATIONS_H
