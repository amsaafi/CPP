#include "Animal.hpp"

Animal::Animal() : Type("")
{
    std::cout << "Animal default constrictor called" << std::endl;
}

Animal::Animal(Animal const &animal)
{
    std::cout << "Animal copy constrictor called" << std::endl;
    *this = animal;
}

std::string Animal::get_type() const
{
    return (this->Type);
}

Animal& Animal::operator=(Animal const &animal)
{
    std::cout << "Animal assignement operator called" << std::endl;
    this->Type = animal.get_type();
    return *this;
}

void Animal::set_type(std::string type)
{
    this->Type = type;
}

Animal::~Animal()
{
    std::cout << "Animal destractor called" << this->Type <<std::endl;
}

void Animal::makeSound() const
{
    std::cout << "sound of Animal" << std::endl;
}