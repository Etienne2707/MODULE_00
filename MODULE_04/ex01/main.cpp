#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main ()
{
	int k;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* array[100];
	for (k = 0;k< 50 ; k++)
	{
		array[k] = new Dog();
	}
	for(k = 50; k < 100; k++)
	{
		array[k] = new Cat();
	}
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);
	for (k = 0; k < 100; k++)
		delete array[k];

}
