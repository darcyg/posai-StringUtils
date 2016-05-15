//
// Created by levin on 5/15/16.
//

#include <algorithm>
#include "query.h"

namespace str{

bool contains(string const& str, string substr)
{
    return
        std::search(
            std::begin(str),
            std::end(str),
            std::begin(substr),
            std::end(substr)
        ) != std::end(str);
}

bool begins_with(string const &str, string front)
{
    return
        std::search(
            std::begin(str),
            std::end(str),
            std::begin(front),
            std::end(front)
        ) == std::begin(str);
}

bool ends_with(string const &str, string back)
{
    auto n = std::begin(back);
    auto m = std::end(back);

    return
        std::search(
            std::begin(str),
            std::end(str),
            n,
            m
        ) == std::end(str)-(m-n);
}

}