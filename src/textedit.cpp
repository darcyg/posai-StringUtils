//
// Created by levin on 4/8/16.
//

#include <textedit.h>

namespace str{

string drop_front(string const &str, size_t characters)
{
    return str.substr(characters,str.size()-characters);
}

string drop_back(string const &str, size_t characters)
{
    return str.substr(0,str.size()-characters);
}

}