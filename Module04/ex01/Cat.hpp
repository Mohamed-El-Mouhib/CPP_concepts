#pragma once

#include "Animal.hpp"

class	Cat: public Animal
{
	private:
		Brain	*_brainptr;

	public:
		Cat( void );
		~Cat( void );
		Cat( const std::string& );
		Cat( const Brain& );
		Cat( const Cat& );
		Cat& operator=( const Cat& );

		void	makeSound( void ) const;
};
