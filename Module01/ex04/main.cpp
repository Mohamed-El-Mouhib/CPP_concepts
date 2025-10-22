#include "FileManager.hpp"
#include <iostream>
#include <string>

int	main(	int ac,char **av )
{
	if (ac != 4)
	{
		std::cout << "please provide a valid arguements" << "\n";
		return 1;
	}
	NotSed	fs(av[1], av[2], av[3]);
	fs.readtilleof();
}
