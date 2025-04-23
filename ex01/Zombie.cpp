#include "Zombie.hpp"

void Zombie::announce ( void )
{
	std::cout << (_name.compare("Foo") ? "<" : "") << _name << (_name.compare("Foo") ? ">" : "")
		<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

void Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
}
