#include "main.hpp"

int openFiles(const char *fileName, const char *newFileName, std::ifstream &ogFile, std::ofstream &newFile)
{
	ogFile.open(fileName);
	if (!ogFile.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return (ERROR);
	}
	newFile.open(newFileName);
	if (!newFile.is_open())
	{
		ogFile.close();
		std::cerr << "Error opening file" << std::endl;
		return (ERROR);
	}
	return (SUCCESS);
}

int copyContent(std::ifstream &ogFile, std::ofstream &newFile, std::string toReplace, std::string toReplaceWith)
{
	std::string line;
	size_t		pos;

	while (getline(ogFile, line))
	{
		pos = 0;
		while ((pos = line.find(toReplace, pos)) != std::string::npos)
		{
			line.erase(pos, toReplace.length());
			line.insert(pos, toReplaceWith);
			pos += toReplaceWith.length();
		}
		newFile << line << std::endl;
	}
	return (SUCCESS);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong parameters -> <filename> <string 1> <string 2>" << std::endl;
		return (ERROR);
	}

	std::string toReplace = av[2];
	std::string toReplaceWith = av[3];
	std::string newFileName = av[1];

	newFileName.append(".replace");
	if (!toReplace.length() || !toReplaceWith.length())
	{
		std::cerr << "Cant replace empty strings" << std::endl;
		return (ERROR);
	}

	std::ifstream	ogFile;
	std::ofstream	newFile;

	if (openFiles(av[1], newFileName.c_str(), ogFile, newFile) == ERROR)
		return (ERROR);
	if (copyContent(ogFile, newFile, toReplace, toReplaceWith) == ERROR)
		return (ERROR);
	ogFile.close();
	newFile.close();
	return (SUCCESS);
}
