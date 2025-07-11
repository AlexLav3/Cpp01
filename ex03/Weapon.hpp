#pragma once
#include <iostream>
#include <string>
#include <cctype> 

//Implement a Weapon class that has:
// • A private attribute type, which is a string.

class Weapon
{
    public: 
    Weapon();
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string type); 

    private:
    std::string type; 
    
};