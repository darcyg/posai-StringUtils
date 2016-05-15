//
// Created by levin on 12/5/15.
//

#include <locale>
#include "conversions.h"

namespace str {

string uppercase(string const& str)
{
    std::locale current_loc;
    string ret;

    for (auto ch: str)
    {
        if (std::isupper(ch, current_loc))
            ret += ch;
        else
            ret += std::use_facet<std::ctype<string::value_type>>(current_loc).toupper(ch);
    }

    return ret;

}

string lowercase(string const& str)
{
    std::locale current_loc;
    string ret;

    for (auto ch: str)
    {
        if (std::islower(ch, current_loc))
            ret += ch;
        else
            ret += std::use_facet<std::ctype<string::value_type>>(current_loc).tolower(ch);
    }

    return ret;

}

string letters(string const& str)
{
    std::locale current_loc;
    string ret;

    for (auto ch: str)
    {
        if (std::isalpha(ch, current_loc))
            ret += ch;
    }

    return ret;
}

string digits(string const& str)
{
    std::locale current_loc;
    string ret;

    for (auto ch: str)
    {
        if (std::isdigit(ch, current_loc))
            ret += ch;
    }

    return ret;
}

}
