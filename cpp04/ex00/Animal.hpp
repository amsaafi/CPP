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
        Animal& operator=(Animal const &animal);
        virtual ~Animal();
        
        virtual void makeSound() const;
        std::string get_type() const;
};

#endif