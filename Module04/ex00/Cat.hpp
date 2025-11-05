#pragma once

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat( void );
		~Cat( void );
		Cat( const std::string& );
		Cat( const Cat& );
		Cat& operator=( const Cat& );

		void	makeSound( void ) const;
};
