#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	try {
		Zombie *zombiePointer = new Zombie(name);
		return zombiePointer;
	}
	catch (const std::bad_alloc& bad) {
		std::cerr << "Memory allocation failed: " << bad.what() << std::endl;
		return nullptr;
	}
}
