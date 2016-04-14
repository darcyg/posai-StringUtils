//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_TRANSFORMATIONS_H
#define POSAI_STRINGUTILS_TRANSFORMATIONS_H

#include "internal_defs.h"

namespace str {

/**
 * Returns a reversed copy of the input string.
 */
string reverse(crstring str);

/**
 * Returns a copy of the input string with all occurrences of pattern replaced by replacement.
 */
string substitute(crstring str, string pattern, string replacement);

}

#endif //POSAI_STRINGUTILS_TRANSFORMATIONS_H
