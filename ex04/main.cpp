#include <iostream>
#include <string>
#include <cctype> 
#include <fstream>

bool find_any(std::string filename, std::string s1)
{
    std::ifstream file(filename);
    if (!file){
        std::cout << "File couldn't be opened" << std::endl;
        return false;
    }
    std::string line;
    while (std::getline(file, line)) {
        if (line.find(s1) != std::string::npos)
            return true;
    }
    return false;
}

void find_replace(std::string filename, std::string s1, std::string s2)
{
    if(!find_any(filename, s1))
        return;
    std::string read;
    std::ifstream opFile(filename);
    if(!opFile){
        std::cout << "error" << std::endl;
        return;
    }
    std::ofstream newfile(filename + "replace");
    int i;
    while (std::getline(opFile, read)) {
        i = 0;
        std::string line;
        while(true){
            std::size_t pos = read.find(s1, i);
            if(pos == std::string::npos){
                line.append(read.substr(i));
                break;
            }
            line.append(read.substr(i, pos - i));
            line.append(s2);
            i = pos + s1.size();
        }
        newfile << line << std::endl;
    }
    opFile.close();
}

int main(int argc, char **argv)
{
    if(argc < 4){
        std::cout << "usage: <filename.ext> <s1> <s2>" << std::endl;
        return 0;
    }
    std::string file = argv[1];
    std::string s1 = argv[2];
    if(s1.empty())
        return 0;
    std::string s2 = argv[3];
    find_replace(file, s1, s2);
    return 0;
}