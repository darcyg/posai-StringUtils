//
// Created by levin on 12/31/15.
//

#include <iostream>
#include <algorithm>
#include "substring.h"

namespace str {


vector<string> split(crstring str, crstring sep)
{
    vector<string> ret;
    string temp = str;

    auto pos = temp.find(sep);
    // Push all substrings from occurrences of <sep>
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

vector<string> sliding_window(crstring str, size_t len)
{
    vector<string> ret;
    if (len>str.size())
        return ret;

    for(size_t i=0; i<str.size()+1-len; ++i)
    {
        auto temp = str.substr(i,len);
        if (temp.length()==len)
            ret.push_back(temp);
    }

    return ret;
}

string between(crstring str, crstring start, crstring end)
{
    string ret=str.substr(str.find(start)+start.size(),str.size());
    ret=ret.substr(0,ret.find(end));
    return ret;
}

string without_first(crstring str, crstring match)
{
    string ret = str;

    auto it = std::search(ret.begin(),ret.end(),match.begin(),match.end());
    ret.erase(it,it+match.size());

    return ret;
}

string without(crstring str, crstring match)
{
    string ret = str;

    while (contains(ret,match))
    {
        ret=without_first(ret,match);
    }

    return ret;
}

bool contains(crstring str, crstring substr)
{
    return (std::search(str.begin(),str.end(),substr.begin(),substr.end()) != str.end());
}

string until_first(crstring str, crstring match)
{
    string ret = str;
    auto it = std::search(ret.begin(),ret.end(),match.begin(),match.end());
    if (it==ret.end())
    {
        return ret;
    }
    return ret.substr(0,it-ret.begin());
}

}
