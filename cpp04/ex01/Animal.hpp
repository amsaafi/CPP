
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal {
    protected :
        std::string Type;
        
    public :
        
        Animal();
        Animal(Animal const &animal);
        virtual void makeSound() const;
        Animal& operator=(Animal const &animal);
        
        std::string get_type() const;
        void set_type(std::string type);
        virtual ~Animal();
};

#endif