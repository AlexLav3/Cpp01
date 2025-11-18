#include <iostream>
#include <string>
#include <cctype> 
#include <fstream>

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It must open the file <filename> and copy its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
*/

void find_replace(std::string filename, std::string s1, std::string s2)
{
    std::string read;
    std::ifstream opFile(filename);
    std::ofstream newfile("new file");
    while (std::getline(opFile, read)) {
        read.find(s1); 
    }
    opFile.close();
}

int main(int argc, char **argv)
{
    if(argc < 4)
        return 0;
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    find_replace(file, s1, s2);
    return 0;
}