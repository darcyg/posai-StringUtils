//
// Created by levin on 12/5/15.
//

#include <algorithm>

std::string reverse(std::string const& str)
{
std::string ret = str;
std::reverse(ret.begin(),ret.end());
return ret;
}