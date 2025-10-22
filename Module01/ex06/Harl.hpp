#pragma once

#include <string>
#include <iostream>

class	Harl
{
	private:
		void	(Harl::*table[4])();
		std::string	lvls[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl( void );
		void complain( std::string level );
};
