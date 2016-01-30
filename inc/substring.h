//
// Created by levin on 12/31/15.
//

#ifndef POSAI_STRINGUTILS_SUBSTRING_H
#define POSAI_STRINGUTILS_SUBSTRING_H

#include <string>
#include <vector>

namespace str {

using std::string;
using std::vector;

/**
 * Splits <str> at every occurrence of <sep> and returns all resulting substrings in a vector.
 * If sep is not present in str, an empty vector is returned.
 */
vector<string> split(string str, char sep = '\n');

/**
 * Returns a substring of <str> containing the characters between, and not including, the
 * first occurences of substrings <start> and <end>.
 * If <start> is not in <str>, the result starts at str.begin().
 * If <end> is not in <str>, the result ends at str.end().
 * The function begins to search of <end> only after it has found an occurence of <start>.
 * If there are matches before that, they are ignored.
 */
string between(string str, string start, string end);

}

#endif //POSAI_STRINGUTILS_SUBSTRING_H
