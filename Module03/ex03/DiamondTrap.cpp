#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap( void )
:ClapTrap( "DefaultDiamond_clap_name" ), _name( "DefaultDiamond")
{
	_Hp = FragTrap::_Hp;
	_Ep = ScavTrap::_Ep;
	_Ad = FragTrap::_Ad;
	std::cout << "DiamondTrap default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name )
:ClapTrap( name ), ScavTrap( name ), FragTrap( name + "_clap_name" ), _name( name )
{
	_Hp = FragTrap::_Hp;
	_Ep = ScavTrap::_Ep;
	_Ad = FragTrap::_Ad;
	std::cout << "DiamondTrap Parameterized Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
:ClapTrap( other ), ScavTrap( other ), FragTrap( other ), _name(other._name)
{
	_Hp = other._Hp;
	_Ep = other._Ep;
	_Ad = other._Ad;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void ) { std::cout << _name << " " << ClapTrap::_name << std::endl; }

void	DiamondTrap::attack( const std::string& target ) { ScavTrap::attack( target ); }

DiamondTrap::~DiamondTrap( void ) { std::cout << "DiamondTrap " << _name << " is being Destroyed" << std::endl; }

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& another )
{
	if (this != &another)
	{
		_name = another._name;
		_Hp = another._Hp;
		_Ep = another._Ep;
		_Ad = another._Ad;
	}

	return *this;
}
