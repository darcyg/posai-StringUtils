#include <iostream>
#include <stringutils.h>

int main()
{
//    set_locale("en_US.UTF8");
    using namespace str;

    const double pi = 3.141592653589;

    std::cout << "Posai String Utils version " << versionString() << std::endl;

    std::cout << std::boolalpha << std::isalpha('a',std::locale()) << std::endl;
    std::cout << std::boolalpha << std::isalpha(wchar_t(L'æ'),std::locale()) << std::endl;
    std::cout << std::boolalpha << std::isalpha('4',std::locale()) << std::endl;

    std::cout << std::boolalpha << str::contains("FooBarBaz","Bar") << std::endl;
    std::cout << std::boolalpha << str::begins_with("FooBarBaz","Foo") << std::endl;
    std::cout << std::boolalpha << str::begins_with("FooBarBaz","foo") << std::endl;
    std::cout << std::boolalpha << str::ends_with("FooBarBaz","Baz") << std::endl;
    std::cout << std::boolalpha << str::ends_with("FooBarBaz","Bar") << std::endl;

    std::cout << reverse("Hello, World!") << std::endl;
    std::cout << substitute("Hello, World!","World","Posai") << std::endl;
    std::cout << substitute("WaffelGaffelSchnaffelFalaffel","affel","anst") << std::endl;
    std::cout << hamming_distance("fafafafa","fagafaga") << std::endl;
    std::cout << editing_distance("APFEL","PFERD") << std::endl;
    try
    {
        std::cout << hamming_distance("fafafafa", "fafafa") << std::endl;
    }
    catch (std::length_error& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
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

    for (auto &w: split("abc#def#Hello#World","#"))
        std::cout << w << std::endl;

    std::cout << pad_front("Boop!",10,'_') << std::endl;
    std::cout << pad_back("Boop!",10,'_') << std::endl;

    std::cout << between("schlabberMcschlipp","schlabber","schlipp") << std::endl;
    std::cout << between("sboingbatschsabber","s","s") << std::endl;

    std::cout << until_first("KEEPTHISnarfDELETETHIS","narf") << std::endl;

    std::cout << without_first("gabbagabba","gabba") << std::endl;
    std::cout << without("i like the flowers i like the daffodils","like") << std::endl;

    for (auto &p: sliding_window("abcdefghijklmnopqrstuvwxyz", 10))
        std::cout << p << std::endl;

    for (auto i=0; i<25; ++i)
    {
        std::cout << natural_num_suffix(i) << std::endl;
    }

    std::cout << drop_front("dropthis|keepthis",string("dropthis").size()) << std::endl;
    std::cout << drop_back("keepthis|dropthis",string("dropthis").size()) << std::endl;

    std::cout << truncate("qwertzuiopasdfghjklyxcvbnm",5) << std::endl;
    std::cout << truncate(string(),5) << std::endl;
    std::cout << truncate("qwertzuiopasdfghjklyxcvbnm",1000) << std::endl;

    return 0;
}
