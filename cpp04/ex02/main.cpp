#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "brain.hpp"

int main()
{    
    std::cout << "=== TESTING ABSTRACT CLASS ===" << std::endl;
    
    std::cout << "Creating Dog and Cat through Animal pointers..." << std::endl;
    
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "\nTesting polymorphic behavior:" << std::endl;
    std::cout << "Dog type: " << dog->get_type() << std::endl;
    std::cout << "Cat type: " << cat->get_type() << std::endl;
    
    std::cout << "\nTesting sounds:" << std::endl;
    dog->makeSound();
    cat->makeSound();
    
    std::cout << "\nTesting array of abstract base pointers:" << std::endl;
    const int size = 4;
    Animal* animals[size];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    
    std::cout << "Making sounds from array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Animal " << i << " (" << animals[i]->get_type() << "): ";
        animals[i]->makeSound();
    }
    
    std::cout << "\nTesting deep copy with concrete classes:" << std::endl;
    {
        Dog original;
        Dog copy(original);
        Dog assigned;
        assigned = original;
        
        std::cout << "All Dog objects created and will be destroyed..." << std::endl;
    }
    
    std::cout << "\nCleaning up individual animals:" << std::endl;
    delete dog;
    delete cat;
    
    std::cout << "\nCleaning up array:" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    
    return 0;
}