#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHordePointer;
	try {
		zombieHordePointer = new Zombie[N];
	}
	catch (std::bad_alloc& e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return nullptr;
	}
	for (int i = 0; i < N; i++)
		zombieHordePointer[i].setName(name);
	return zombieHordePointer;
}
