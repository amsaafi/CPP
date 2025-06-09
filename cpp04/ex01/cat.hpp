#ifndef CAT_HPP
#define Cat_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "brain.hpp"

class Cat : public Animal {

    private :
    
    	Brain *brain;
    public : 

        Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        virtual ~Cat();
        
        void makeSound() const;
        Brain* get_brain();
        
};

#endif