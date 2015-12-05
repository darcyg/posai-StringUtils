//
// Created by levin on 12/5/15.
//

#include <locale>
#include "casemods.h"

std::string uppercase(std::string const& str)
{
    std::locale current_loc;
    std::string ret;

    for(auto ch: str)
    {
        if (std::isupper(ch,current_loc))
            ret+=ch;
        else
            ret+=std::use_facet<std::ctype<std::string::value_type>>(current_loc).toupper(ch);
    }

    return ret;

}

std::string lowercase(std::string const& str)
{
    std::locale current_loc;
    std::string ret;

    for(auto ch: str)
    {
        if (std::islower(ch,current_loc))
            ret+=ch;
        else
            ret+=std::use_facet<std::ctype<std::string::value_type>>(current_loc).tolower(ch);
    }

    return ret;

}

std::string letters(std::string const& str)
{
    std::locale current_loc;
    std::string ret;

}

std::string digits(std::string const &str)
{
    std::locale current_loc;
    std::string ret;

    for (auto ch: str)
    {
        if (std::isdigit(ch,current_loc))
            ret+=ch;
    }

    return ret;
}
