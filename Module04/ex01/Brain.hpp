#pragma once

#include <string>
#include <iostream>

class	Brain
{
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain& );
		Brain& operator=( const Brain& );

		std::string	ideas[100];
};
