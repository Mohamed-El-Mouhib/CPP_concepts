#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap( void );
		DiamondTrap( const std::string& );
		DiamondTrap( const DiamondTrap& );
		~DiamondTrap( void );
		DiamondTrap& operator=( const DiamondTrap& );

		void	attack( const std::string& target );
		void	whoAmI( void );
};
