#pragma once

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog( void );
		~Dog( void );
		Dog( const std::string& );
		Dog( const Dog& );
		Dog& operator=( const Dog& );

		void	makeSound( void ) const;
};
