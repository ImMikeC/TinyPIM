//TinyPIM (c) 1999 Pablo Halpern. File Address.cpp

#include "Address.h"
#include <cstring>

Address::Address()
{
    //Initialize all strings to empty
    lastname_[0] = firstname_[0] = phone_[0] = address_[0] = '\0';
}

void Address::lastname(const char* s)
{
    std::strcpy(lastname_, s);
}

void Address::firstname(const char* s)
{
    std::strcpy(firstname_, s);
}

void Address::phone(const char* s)
{
    std::strcpy(phone_, s);
}

void Address::address(const char* s)
{
    std::strcpy(address_, s);
}
