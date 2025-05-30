#include "harl.hpp"

harl::harl(void) {}

harl::~harl(void) {}

int harl::getHash(const std::string& str)
{
    int hash = 0;
    for (size_t i = 0; i < str.length(); i++) {
        hash += str[i];
    }
    return hash;
}

void harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
    int hash = getHash(level);
    
    switch (hash) 
    {
        case 359: // "DEBUG"
            debug();
            break;
            
        case 300: // "INFO"
            info();
            break;
            
        case 534: // "WARNING" 
            warning();
            break;
            
        case 394: // "ERROR"
            error();
            break;
            
        default:
            std::cout << "INVALID COMP..." << std::endl;
            break;
    }
}
