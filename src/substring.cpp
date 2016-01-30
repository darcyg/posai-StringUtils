//
// Created by levin on 12/31/15.
//

#include <iostream>
#include <algorithm>
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

string without_first(string str, string match)
{
    string ret = str;

    auto it = std::search(ret.begin(),ret.end(),match.begin(),match.end());
    ret.erase(it,it+match.size());

    return ret;
}

string without(string str, string match)
{
    string ret = str;

    while (contains(ret,match))
    {
        ret=without_first(ret,match);
    }

    return ret;
}

bool contains(string str, string substr)
{
    return (std::search(str.begin(),str.end(),substr.begin(),substr.end()) != str.end());
}
}
