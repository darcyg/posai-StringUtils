//
// Created by levin on 12/5/15.
//

#include <locale>
#include "set_locale.h"

namespace str {

void set_locale(std::string identifier)
{
    std::locale::global(std::locale(identifier.c_str()));
}

}