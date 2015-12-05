#include <iostream>
#include "stringutils/stringutils.h"

int main()
{
    set_locale("en_US.UTF8");

    std::cout << reverse("Hello, World!") << std::endl;
    std::cout << hamming_distance("fafafafa","fagafaga") << std::endl;
    std::cout << editing_distance("APFEL","PFERD") << std::endl;
    std::cout << uppercase("Hello, World!") << std::endl;
    std::cout << lowercase("Hello, World!") << std::endl;

    std::cout << std::boolalpha << std::isalpha('a',std::locale()) << "\n";
    std::cout << std::boolalpha << std::isalpha(wchar_t(L'æ'),std::locale()) << "\n";
    std::cout << std::boolalpha << std::isalpha('4',std::locale()) << "\n";
    return 0;
}