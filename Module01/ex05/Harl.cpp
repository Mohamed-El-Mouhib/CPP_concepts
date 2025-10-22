#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	// this->table["debug"] = &Harl::debug;
	// this->table["info"] = &Harl::info;
	// this->table["warning"] = &Harl::warning;
	table["error"] = 0;
	table["debug"] = 1;
	table["info"] = 2;
	table["warning"] = 3;
	ftable.push_back(&Harl::error);
	ftable.push_back(&Harl::debug);
	ftable.push_back(&Harl::info);
	ftable.push_back(&Harl::warning);
}

void	Harl::complain( std::string level )
{
	it = table[level];
	ftable[it];
	// switch (it)
	// {
	// 	case 0:
	// 		error();
	// 		break;
	// 	case 1:
	// 		this->debug();
	// 		break;
	// 	case 2:
	// 		this->info();
	// 		break;
	// 	case 3:
	// 		this->warning();
	// 		break;
	// }
}
void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
