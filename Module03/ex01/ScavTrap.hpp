#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
