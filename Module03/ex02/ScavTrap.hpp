#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( ScavTrap& );
		ScavTrap( const std::string& );

		void	guardGate( void );
		void	attack( const std::string& target );
};
