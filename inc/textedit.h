//
// Created by levin on 4/8/16.
//

#ifndef POSAI_STRINGUTILS_TEXTEDIT_H
#define POSAI_STRINGUTILS_TEXTEDIT_H

/**
 * Useful functions for text editing
 */
#include <string>

namespace str
{

using std::string;

/**
 * Returns a copy of str with the first N characters removed.
 * If N exceeds str.size(), an empty string is returned.
 */
string drop_front(string const &str, size_t characters);

/**
 * Returns a copy of str with the last N characters removed.
 * If N exceeds str.size(), an empty string is returned.
 */
string drop_back(string const &str, size_t characters);

}

#endif //POSAI_STRINGUTILS_TEXTEDIT_H
