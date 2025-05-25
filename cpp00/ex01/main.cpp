#include "phonebookcls.hpp"
#include <iostream>
#include <string>

int main(void)
{
    phonebook myphonebook;
    std::string cmd;

    std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while(1)
    {
        std::cout << "> ";
        std::getline(std::cin, cmd);

        if (std::cin.eof())
        {
            std::cout << std::endl << "EOF detected. Exiting program." << std::endl;
            break;
        }
        if (cmd == "ADD")
            myphonebook.addContact();
        else if (cmd == "SEARCH")
            myphonebook.search();
        else if (cmd == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Unknown command. Available commands: ADD, SEARCH, EXIT" << std::endl;
    }
    return 0;
}
