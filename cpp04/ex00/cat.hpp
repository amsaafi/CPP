#ifndef CAT_HPP
#define Cat_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"


class Cat : public Animal {

    public :

        Cat();
        Cat(Cat const &cat);
        Cat& operator=(Cat const &cat);
        ~Cat();
        
        void makeSound() const;
   
        
};

#endif