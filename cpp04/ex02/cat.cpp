#include "cat.hpp"

Cat::Cat() 
{
    std::cout << "cat default constrictor called" << std::endl;
    this->Type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal(cat), brain(new Brain(*(cat.brain)))
{
    std::cout << "cat copy constrictor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(Cat const &cat)
{
    std::cout << "cat assignement operator called" << std::endl;
    this->Type = cat.get_type();
    delete this->brain;
    this->brain = new Brain(*(cat.brain));
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "cat destractor called " << this->Type <<std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meaow " << std::endl;
}