#ifndef WRONGCAT_HPP
#define WRONGCat_HPP

#include <iostream>
#include <string>
#include "wronganimal.hpp"


class WrongCat : public WrongAnimal {

    public : 

        WrongCat();
        WrongCat(WrongCat const &cat);
        WrongCat& operator=(WrongCat const &cat);
        ~WrongCat();
        
        void makeSound() const;
        
};

#endif
