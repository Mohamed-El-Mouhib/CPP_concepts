#pragma once

#include "Animal.hpp"

class	Dog: public Animal
{
	private:
		Brain	*_brainptr;

	public:
		Dog( void );
		~Dog( void );
		Dog( const std::string& );
		Dog( const Brain& );
		Dog( const Dog& );
		Dog& operator=( const Dog& );

		void	makeSound( void ) const;
};
