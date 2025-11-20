#pragma once

#include "Brain.hpp"

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const std::string& );
		Animal( const Animal& );
		Animal& operator=( const Animal& );

		std::string getType( void ) const;
		virtual void	makeSound( void ) const;
};
