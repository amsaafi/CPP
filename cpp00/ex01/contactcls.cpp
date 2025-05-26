#include "contactcls.hpp"
#include <cstdlib>

contact::contact()
{return;}
contact::~contact()
{return;}


bool fill_line(std::string out, std::string *in)
{
    std::string tmp;

    while (true)
    {
        std::cout << out;
        
        if (!std::getline(std::cin, tmp))
            return false;
        if (!tmp.empty() && tmp[0] != '\0')
        {
            *in = tmp;
            return true;    
        }
        
        std::cout << "No empty fields!" << std::endl;
    }
}

void contact::init(int i)
{
    this->_index = i;
    
    if (!fill_line("Firstname: ", &this->_firstname) ||
        !fill_line("Lastname: ", &this->_lastname) ||
        !fill_line("Nickname: ", &this->_nickname) ||
        !fill_line("Number: ", &this->_phonenumber) ||
        !fill_line("Darkest secret: ", &this->_darksecret))
    {
        std::cout << std::endl << "EOF detected during contact creation." << std::endl;
        exit(1);  // Or handle gracefully
    }
}

int         contact::getindex() const {
    return (this->_index);
}

std::string contact::getFirstName() const {
    return (this->_firstname);
}

std::string contact::getLastName() const {
    return (this->_lastname);
}

std::string contact::getNickName() const {
    return (this->_nickname);
}

std::string contact::getPhoneNumber() const {
    return (this->_phonenumber);
}

std::string contact::getDarkSecret() const {
    return (this->_darksecret);
}
