//
// Created by levin on 12/31/15.
//

#ifndef POSAI_STRINGUTILS_SUBSTRING_H
#define POSAI_STRINGUTILS_SUBSTRING_H

#include <string>
#include <vector>

/**
 * Splits <str> at every occurrence of <sep> and returns all resulting substrings in a vector.
 * If sep is not present in str, an empty vector is returned.
 */
std::vector<std::string> split(std::string str, char sep='\n');

#endif //POSAI_STRINGUTILS_SUBSTRING_H
