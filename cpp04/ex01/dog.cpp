#include "dog.hpp"

Dog::Dog()
{
    std::cout << "dog default constrictor called" << std::endl;
    this->Type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog), brain(new Brain(*(dog.brain)))
{
    std::cout << "dog copy constrictor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
    std::cout << "dog assignement operator called" << std::endl;
    this->Type = dog.get_type();
    delete this->brain;
    this->brain = new Brain(*(dog.brain));
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "dog destractor called " << this->Type <<std::endl;
}

Brain *Dog::GetBrain()
{
    return (this->brain);
}

void Dog::makeSound() const
{
    std::cout << "Hoooow" <<std::endl;
}
