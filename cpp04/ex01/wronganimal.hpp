#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal {
    protected :
        std::string Type;
        
    public :
        
        WrongAnimal();
        WrongAnimal(WrongAnimal const &animal);
        std::string get_type() const;
        void makeSound() const;
        WrongAnimal& operator=(WrongAnimal const &animal);
        ~WrongAnimal();
};

#endif