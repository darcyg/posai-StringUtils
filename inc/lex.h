//
// Created by levin on 4/5/16.
//

#ifndef POSAI_STRINGUTILS_LEX_H
#define POSAI_STRINGUTILS_LEX_H

/**
 * @file Lexical utilities, depending on make_string.h
 */

#include "make_string.h"

namespace str
{

using std::string;

/**
 * Turns the input number t, interpreted as an integer, into a string and adds an
 * enumeration suffix as the english language would.
 * e.g. 1st, 2nd, 3rd, 4th, ... 10th, 11th, 12th, ... 20th, 21st, 22nd, 23rd, ...
 */
template<typename T>
typename std::enable_if<
    std::is_convertible<T,size_t>::value,
    string
>::type  naturalNumSuffix(T const& t)
{
    string suffix = "th";
    auto wstr = num_to_string(size_t(t),0);
    if (wstr.size()==1 || (wstr.at(wstr.size()-2) != '1'))
    {
        switch (wstr.at(wstr.size()-1))
        {
            case '1':
                suffix = "st";
                break;
            case '2':
                suffix = "nd";
                break;
            case '3':
                suffix = "rd";
                break;
            default:
                break;
        }
    }
    return wstr+suffix;
}


}

#endif //POSAI_STRINGUTILS_LEX_H
