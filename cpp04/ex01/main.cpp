#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"
#include "brain.hpp"

int	main(void)
{
    int n = 2;
    Animal *a[n];

    for (int i = 0; i < (n / 2); i++)
    {
        a[i] = new Dog();
    }

    for (int i = (n / 2); i < n; i++)
    {
        a[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
    {
        a[i]->makeSound();
    }
    
    for (int i = 0; i < n; i++)
	{
        delete a[i];
	}
	return 0;
}