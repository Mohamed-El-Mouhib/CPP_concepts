#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( const ScavTrap& );
		ScavTrap( const std::string& );
		ScavTrap& operator=( const ScavTrap& );

		void	guardGate( void );
		void	attack( const std::string& target );
};
