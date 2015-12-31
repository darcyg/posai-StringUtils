//
// Created by levin on 12/5/15.
//

#include "special_cases.h"

namespace str {

std::string pad_digits(std::string const &dgt_str, size_t digits)
{
    std::string ret = dgt_str;
    while (ret.length() < digits)
    {
        ret = std::string("0") + ret;
    }

    return ret;
}

}