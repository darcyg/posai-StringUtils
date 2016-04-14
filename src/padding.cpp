//
// Created by levin on 12/5/15.
//

#include "padding.h"

namespace str {

string pad_digits(crstring dgt_str, size_t digits)
{
    return pad_front(dgt_str,digits,'0');
}

string pad_front(crstring str, size_t characters, char pad)
{
    if (str.length() >= characters)
        return str;

    string ret(characters-str.length(),pad);
    ret+=str;
    return ret;
}

string pad_back(crstring str, size_t characters, char pad)
{
    if (str.length() >= characters)
        return str;

    string ret(str);
    ret+=string(characters-str.length(),pad);
    return ret;
}
}