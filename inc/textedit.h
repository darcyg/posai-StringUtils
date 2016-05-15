//
// Created by levin on 4/8/16.
//

#ifndef POSAI_STRINGUTILS_TEXTEDIT_H
#define POSAI_STRINGUTILS_TEXTEDIT_H

/**
 * Useful functions for text editing
 */
#include "internal_defs.h"

namespace str
{

/**
 * Returns a copy of str with the first n characters removed.
 * If n exceeds str.size(), an empty string is returned.
 */
string drop_front(string const &str, size_t n);

/**
 * Returns a copy of str with the last n characters removed.
 * If n exceeds str.size(), an empty string is returned.
 */
string drop_back(string const &str, size_t n);

}

#endif //POSAI_STRINGUTILS_TEXTEDIT_H
