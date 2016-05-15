//
// Created by levin on 5/15/16.
//

#ifndef POSAI_STRINGUTILS_QUERY_H
#define POSAI_STRINGUTILS_QUERY_H

#include "internal_defs.h"

namespace str
{

/**
 * Convenient lookup.
 */
bool contains(string const& str, string substr);

/**
 * Lookup at the front of a string.
 */
bool begins_with(string const &str, string front);

/**
 * Lookup at the end of a string.
 */
bool ends_with(string const& str, string back);

}

#endif //POSAI_STRINGUTILS_QUERY_H
