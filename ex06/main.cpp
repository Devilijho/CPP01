#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		return ((std::cout << "Correct usage " << av[0] << " <level>" << std::endl), 1);

	return 0;
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
		case 1:
		case
	}
}
