#include "phonebookcls.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int phonebook::_i = 0;

phonebook::phonebook()
{
    return;
}

phonebook::~phonebook()
{
    return;
}

int phonebook::geti() const
{
    return this->_i;
}

void phonebook::addContact()
{
    int index = this->_i % 8;
    this->book[index].init(index);
    this->_i++;
    std::cout << "Contact added successfully!" << std::endl;
}

static std::string formatColumn(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void phonebook::search() const
{
    int contactCount = 0;
    
    if (this->_i < 8)
        contactCount = this->_i;
    else
        contactCount = 8;
    
    if (contactCount == 0)
    {
        std::cout << "No contacts in the phonebook." << std::endl;
        return;
    }
    
    std::cout << "|" << std::setw(10) << "Index" << "|" 
              << std::setw(10) << "First Name" << "|" 
              << std::setw(10) << "Last Name" << "|" 
              << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    int i = 0;
    while (i < contactCount)
    {
        std::cout << "|" << std::setw(10) << this->book[i].getindex() << "|" 
                  << std::setw(10) << formatColumn(this->book[i].getFirstName()) << "|" 
                  << std::setw(10) << formatColumn(this->book[i].getLastName()) << "|" 
                  << std::setw(10) << formatColumn(this->book[i].getNickName()) << "|" << std::endl;
        i++;
    }

    std::string input;
    int index = 0;
    bool validInput = false;
    
    while (!validInput)
    {
        std::cout << "Enter index to display: ";
        std::getline(std::cin, input);
        
        if (input.empty())
        {
            std::cout << "Index cannot be empty!" << std::endl;
            continue;
        }
        
        bool allDigits = true;
        index = 0;
        
        for (size_t j = 0; j < input.length(); j++)
        {
            if (!std::isdigit(input[j]))
            {
                allDigits = false;
                break;
            }
            index = index * 10 + (input[j] - '0');
        }
        
        if (!allDigits)
        {
            std::cout << "Invalid index! Please enter a numeric index." << std::endl;
            continue;
        }
        
        validInput = true;
    }
    
    printContact(index);
}

void phonebook::printContact(int i) const
{
    if (i < 0 || i >= 8 || (i >= this->_i && this->_i < 8))
    {
        std::cout << "Contact not found!" << std::endl;
        return;
    }
    
    std::cout << std::endl;
    std::cout << "Contact Information:" << std::endl;
    std::cout << "Index: " << this->book[i].getindex() << std::endl;
    std::cout << "First Name: " << this->book[i].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->book[i].getLastName() << std::endl;
    std::cout << "Nickname: " << this->book[i].getNickName() << std::endl;
    std::cout << "Phone Number: " << this->book[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->book[i].getDarkSecret() << std::endl;
    std::cout << std::endl;
}
