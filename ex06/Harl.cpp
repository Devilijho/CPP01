#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Harl says: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "Harl says: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Harl says: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "Harl says: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
	int	lvl;

	for (lvl = 0; lvl < 4; lvl++)
	{
		if (levels[lvl] == level)
			break ;
	}

	switch (lvl)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
