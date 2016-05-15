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
#include <stdexcept>
#include "internal_defs.h"

namespace str {

/**
 *  Returns the Hamming distance (amount of differing characters) between strings of the same length.
 *  Throws std::length_error if the string lengths don't match.
 */
std::size_t hamming_distance(string const& a, string const& b) throw(std::length_error);

/**
 * Determines the editing distance to convert string a into string b using the elementary
 * character operations "insert", "erase" and "rename". Note that for equally long strings,
 * this is still a different metric than the Hamming distance.
 */
std::size_t editing_distance(string const& a, string const& b);

}
#endif //POSAI_STRINGUTILS_METRICS_H
