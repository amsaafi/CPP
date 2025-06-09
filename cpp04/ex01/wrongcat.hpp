#ifndef WRONGCAT_HPP
#define WRONGCat_HPP

#include <iostream>
#include <string>
#include "wronganimal.hpp"


class WrongCat : public WrongAnimal {

    public : 

        WrongCat();
        WrongCat(WrongCat const &cat);
        void makeSound() const;
        WrongCat& operator=(WrongCat const &cat);
        ~WrongCat();
        
};

#endif