#pragma once

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( const std::string& );
		WrongCat( const WrongCat& );
		WrongCat& operator=( const WrongCat& );

		void	makeSound( void ) const;
};
