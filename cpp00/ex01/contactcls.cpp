#include "contactcls.hpp"

contact::contact()
{return;}
contact::~contact()
{return;}


void    fill_line(std::string out, std::string *in)
{
    std::string tmp;

    std::cout << out;
    while (std::getline(std::cin, tmp) && !tmp[0])
    {
        std::cout << "No empty filds!" << std::endl << out;
    }
    *in = tmp;
}

void    contact::init(int i)
{
    std::string tmp;

    this->_index = i;
    fill_line("Firstname: ", &this->_firstname);
    fill_line("Lastname: ", &this->_lastname);
    fill_line("Nickname: ", &this->_nickname);
    fill_line("Number: ", &this->_phonenumber);
    fill_line("Darkest secret: ", &this->_darksecret);
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
