//
// Created by levin on 12/5/15.
//

#include <algorithm>
#include "transformations.h"

namespace str {

string reverse(string const& str)
{
    string ret = str;
    std::reverse(ret.begin(), ret.end());
    return ret;
}

string substitute(string const& str, string pattern, string replacement)
{
    string ret = str;

    while (ret.find(pattern) != string::npos)
        ret.replace(ret.find(pattern), pattern.length(), replacement);

    return ret;
}

}
