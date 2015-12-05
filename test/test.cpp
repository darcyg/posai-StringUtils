#include <iostream>
#include <stringutils.h>

int main()
{
    set_locale("en_US.UTF8");

    std::cout << std::boolalpha << std::isalpha('a',std::locale()) << "\n";
    std::cout << std::boolalpha << std::isalpha(wchar_t(L'æ'),std::locale()) << "\n";
    std::cout << std::boolalpha << std::isalpha('4',std::locale()) << "\n";

    std::cout << reverse("Hello, World!") << std::endl;
    std::cout << substitute("Hello, World!","World","Posai") << std::endl;
    std::cout << substitute("WaffelGaffelSchnaffelFalaffel","affel","anst") << std::endl;
    std::cout << hamming_distance("fafafafa","fagafaga") << std::endl;
    std::cout << editing_distance("APFEL","PFERD") << std::endl;
    std::cout << uppercase("Hello, World!") << std::endl;
    std::cout << lowercase("Hello, World!") << std::endl;

    std::cout << letters("a12b34c56def7g89hij0") << std::endl;
    std::cout << digits("a12b34c56def7g89hij0") << std::endl;

    return 0;
}