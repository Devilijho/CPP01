#include "Zombie.hpp"

int main( void )
{
	Zombie *zombieHordePointer = zombieHorde(10, "Zombie");

	if (zombieHordePointer)
	{
		for (int i = 0; i < 10; i++)
			zombieHordePointer[i].announce();
		delete[] zombieHordePointer;
	}

	Zombie *zombieErrorHordePointer = zombieHorde(-42, "ZombieError");

	if (zombieErrorHordePointer)
	{
		for (int i = 0; i < 10; i++)
			zombieErrorHordePointer[i].announce();
		delete[] zombieErrorHordePointer;
	}
}
