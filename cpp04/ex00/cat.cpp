#include "cat.hpp"

Cat::Cat()
{
    std::cout << "cat default constrictor called" <<std::endl;
    this->Type = "Cat";
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
    std::cout << "cat copy constrictor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
    std::cout << "cat assignement operator called" << std::endl;
    this->Type = cat.get_type();
    return *this;
}

Cat::~Cat()
{
    std::cout << "cat destractor called " << this->Type <<std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meaow " << std::endl;
}