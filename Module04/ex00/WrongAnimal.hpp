#pragma once

#include <string>
#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( const std::string& );
		WrongAnimal( const WrongAnimal& );
		WrongAnimal& operator=( const WrongAnimal& );

		std::string getType( void ) const;
		void	makeSound( void ) const;
};
