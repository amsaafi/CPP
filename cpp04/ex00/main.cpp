#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int	main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    j->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
        
    const WrongAnimal* m = new WrongAnimal();

     const WrongAnimal* n = new WrongCat();
    std::cout << m->get_type() << " " << std::endl;
    std::cout << n->get_type() << " " << std::endl;

    m->makeSound();
    n->makeSound();
    delete n;
    delete m;
    return 0;
}