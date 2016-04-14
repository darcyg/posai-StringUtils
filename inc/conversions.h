//
// Created by levin on 12/5/15.
//

#ifndef POSAI_STRINGUTILS_CONVERSIONS_H
#define POSAI_STRINGUTILS_CONVERSIONS_H

#include "internal_defs.h"

namespace str{

/**
 * Returns uppercased input according to the current locale.
 */
string uppercase(crstring str);

/**
 * Returns lowercased input according to the current locale.
 */
string lowercase(crstring str);

/**
 * Returns the letters of the input string, discarding digits and special symbols.
 */
string letters(crstring str);

/**
 * Returns the digits of the input string, discarding everything else.
 */
string digits(crstring str);

}

#endif //POSAI_STRINGUTILS_CONVERSIONS_H
