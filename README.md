# Cpp01 module from 42, on Memory allocation, pointers to members, references and switch statements

### General Requirements: 
    -Wall -Werror -Wextra and -std=c++98 flags 
    -C++11 (and derived forms) and Boost libraries are forbidden.
    -using namespace and friend is not allowed
    -Orthodox Canonical Form

## Ex00:
Making a Zombie Class, with a private attribute name. Zombies can announce themselves with a member function. Two other functions required; 

Zombie* newZombie( std::string name );
void randomChump( std::string name );

The exercise is meant for understanding heap vs stack allocation and when it's best to allocate on each. 

Of course, it was required to always check for memory leaks in all exercises. 

## Ex01
Adding a member function to the Zombie class to allocate a N amount of zombies in a single allocation, and initialize them with the name passed. 

## Ex02
The exercise was made for the person to be able to understand and explain the differences between pointers and references, I also think it's important to understand when in which cases it's best to use one or the other.

## Ex03
Weapon and Human A & B classes, what each class has have as attributes and member functions were described in the subject, however, it was not specified when to use pointers or references, as the point of the exercise 
was for the person to decide in which class use a pointer and which use a reference based on the needs; 

HumanA takes the Weapon in its constructor, HumanB does not.
HumanB may not always have a weapon, whereas HumanA will always be armed.

## Ex04
Createting a program that takes three parameters;  a filename and two strings, s1 and s2.
It must open the file given as parameters and copy its content into a new file, replacing every occurrence of s1 with s2. Using replace was not allowed. Given design freedom aside from C file manipulation functions being forbidden. 

Handling of errors and unexpected inputs is required. 

## Ex05
Making a Harl class that has different levels of "complaints" and a member function to make Harl complain in the according level displaying the correct message. 
The goal of this exercise is to use pointers to member functions, Harl has to complain without using if/else if/else.
