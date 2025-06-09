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
        WrongAnimal& operator=(WrongAnimal const &animal);
        ~WrongAnimal();
        
        std::string get_type() const;
        void makeSound() const;
};

#endif
