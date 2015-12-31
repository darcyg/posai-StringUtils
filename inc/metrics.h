//
// Created by levin on 12/5/15.
//

/**
 * @file Metrics; Distance calculations on strings.
 *
 * All functions in this file are case sensitive, so, say, the Hamming distance
 * between "AABB" and "aabb" is 4, not 0.
 */

#ifndef POSAI_STRINGUTILS_METRICS_H
#define POSAI_STRINGUTILS_METRICS_H

#include <string>

namespace str {

/**
 *  Returns the length of the shorter string if the inputs aren't the same length.
 *  Otherwise, returns the Hamming distance (amount of differing characters) between the strings.
 */
std::size_t hamming_distance(std::string const &a, std::string const &b);

/**
 * Determines the editing distance to convert string a into string b using the elementary
 * character operations "insert", "erase" and "rename". Note that for equally long strings,
 * this is still a different metric than the Hamming distance.
 */
std::size_t editing_distance(std::string const &a, std::string const &b);

}
#endif //POSAI_STRINGUTILS_METRICS_H
