//
// Created by levin on 12/31/15.
//

#include <iostream>
#include "substring.h"

std::vector<std::string> split(std::string str, char sep)
{
    std::vector<std::string> ret;
    std::string temp = str;

    auto pos = temp.find(sep);
    // Push all substrings from occurences of <sep>
    while (pos != temp.npos)
    {
        ret.push_back(temp.substr(0,pos));
        temp=temp.substr(pos+1,temp.length()-pos);
        pos=temp.find(sep);
    }
    // Push the remaining part from last <sep> until end of string.
    ret.push_back(temp);

    return ret;
}
