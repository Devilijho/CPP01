#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String adress:" << &str << std::endl;
	std::cout << "String pointer adress:" << &stringPTR << std::endl;
	std::cout << "String reference adress:" << &stringREF << std::endl;
	std::cout << "String value:" << str << std::endl;
	std::cout << "String pointer value:" << *stringPTR << std::endl;
	std::cout << "String reference value:" << stringREF << std::endl;
}
