#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_Hp; //hit point
		unsigned int	_Ep; //energie point
		unsigned int	_Ad; //attack damage

	public:
		ClapTrap( void );
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& );
		ClapTrap& operator=( const ClapTrap& );
		~ClapTrap( void );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};
