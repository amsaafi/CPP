#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "brain.hpp"

class Dog : public Animal {
    private :
    
        Brain *brain;
    public :

        Dog();
        Dog(Dog const &dog);
        Brain *GetBrain();
        Dog& operator=(Dog const &dog);
         ~Dog();
        
        void makeSound() const;
        
};

#endif