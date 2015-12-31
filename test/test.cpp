#include <iostream>
#include <stringutils.h>

int main()
{
//    set_locale("en_US.UTF8");
    using namespace str;

    const double pi = 3.141592653589;

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

    std::cout << num_to_string(pi,2) << std::endl;
    std::cout << num_to_string(pi,20) << std::endl;
    std::cout << num_to_string(pi,0) << std::endl;
    std::cout << pad_digits( num_to_string(3000,1), 10 ) << std::endl;
    std::cout << hex(42) << std::endl;
    std::cout << hex(123456) << std::endl;
    std::cout << hex(0xffffff) << std::endl;
    std::cout << binary(42) << std::endl;
    std::cout << binary(128) << std::endl;

    std::cout << letters("a12b34c56def7g89hij0") << std::endl;
    std::cout << digits("a12b34c56def7g89hij0") << std::endl;

    auto words = split("abc#def#Hello#World",'#');
    for (auto &w: words)
        std::cout << w << std::endl;

    return 0;
}