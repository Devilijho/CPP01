#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Creating zombies (in the heap)" << std::endl;

	Zombie *zombie1 = newZombie("John");
	Zombie *zombie2 = newZombie("Foo");

	if (zombie1)
		zombie1->announce();
	if (zombie2)
		zombie2->announce();

	if (zombie1)
		delete zombie1;
	if (zombie2)
		delete zombie2;

	std::cout << "Creating chumps (in the stack)" << std::endl;
	randomChump("Bar");
	randomChump("Baz");
}
