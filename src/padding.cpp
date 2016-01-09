//
// Created by levin on 12/5/15.
//

#include "padding.h"

namespace str {

std::string pad_digits(std::string const &dgt_str, size_t digits)
{
    return pad_front(dgt_str,digits,'0');
}

std::string pad_front(std::string const &str, size_t characters, char pad)
{
    if (str.length() >= characters)
        return str;

    std::string ret(characters-str.length(),pad);
    ret+=str;
    return ret;
}

std::string pad_back(std::string const &str, size_t characters, char pad)
{
    if (str.length() >= characters)
        return str;

    std::string ret(str);
    ret+=std::string(characters-str.length(),pad);
    return ret;
}
}