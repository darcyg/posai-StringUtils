//
// Created by levin on 12/5/15.
//

#include <algorithm>

namespace str {

std::string reverse(std::string const &str)
{
    std::string ret = str;
    std::reverse(ret.begin(), ret.end());
    return ret;
}

std::string substitute(std::string const &str, std::string pattern, std::string replacement)
{
    std::string ret = str;

    while (ret.find(pattern) != std::string::npos)
        ret.replace(ret.find(pattern), pattern.length(), replacement);

    return ret;
}

}
