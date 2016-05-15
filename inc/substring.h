//
// Created by levin on 12/31/15.
//

#ifndef POSAI_STRINGUTILS_SUBSTRING_H
#define POSAI_STRINGUTILS_SUBSTRING_H


#include <vector>
#include "internal_defs.h"

namespace str {

using std::vector;

/**
 * Splits <str> at every occurrence of <sep> and returns all resulting substrings in a vector.
 * If sep is not present in str, an empty vector is returned.
 */
vector<string> split(string const& str, string sep = "\n");

/**
 * Extracts substrings of fixed size len from str by iterating over it until
 * the mask of size len no longer fits. Returns an empty vector if str.length()
 * is smaller than len.
 */
vector<string> sliding_window(string const& str, size_t len);

/**
 * Returns a substring of <str> containing the characters between, and not including, the
 * first occurrences of substrings <start> and <end>.
 * If <start> is not in <str>, the result starts at str.begin().
 * If <end> is not in <str>, the result ends at str.end().
 * The function begins to search of <end> only after it has found an occurrence of <start>.
 * If there are matches before that, they are ignored.
 */
string between(string const& str, string const& start, string const& end);

/**
 * Returns a substring of str from its beginning to (and not including) the first occurrence of match.
 */
string until_first(string const& str, string match);

/**
 * Returns a copy of str with the first occurrence of match removed.
 */
string without_first(string const& str, string match);

/**
 * Returns a copy of str with all occurrences of match removed.
 */
string without(string const& str, string match);

}

#endif //POSAI_STRINGUTILS_SUBSTRING_H
