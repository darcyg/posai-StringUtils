//
// Created by levin on 12/31/15.
//

#include <iostream>
#include "substring.h"

namespace str {


vector<string> split(string str, char sep)
{
    vector<string> ret;
    string temp = str;

    auto pos = temp.find(sep);
    // Push all substrings from occurences of <sep>
    while (pos != temp.npos)
    {
        ret.push_back(temp.substr(0, pos));
        temp = temp.substr(pos + 1, temp.length() - pos);
        pos = temp.find(sep);
    }
    // Push the remaining part from last <sep> until end of string.
    ret.push_back(temp);

    return ret;
}

string between(string str, string start, string end)
{
    string ret=str.substr(str.find(start)+start.size(),str.size());
    ret=ret.substr(0,ret.find(end));
    return ret;
}

}
