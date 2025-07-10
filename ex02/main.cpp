#include <iostream>
#include <string>
#include <cctype> 

int main()
{
    std::string phrase = "HI THIS IS BRAIN";
    std::string* stringPTR = &phrase;
    std::string& stringREF = phrase;

    std::cout << "memory address of phrase:" << &phrase << std::endl ;
    std::cout << "memory address of stringPTR: " << stringPTR << std::endl ;
    std::cout << "memory address of stringREF: " << &stringREF << std::endl ;

    std::cout << "value of phrase:" << phrase << std::endl ;
    std::cout << "value of stringPTR: " << *stringPTR << std::endl ;
    std::cout << "value of stringREF: " << stringREF << std::endl ;
    return 0;
}