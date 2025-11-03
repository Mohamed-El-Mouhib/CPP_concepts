#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void )
{
	_name = "DefaultScav";
	_Hp = 100;
	_Ep = 50;
	_Ad = 20;
	std::cout << "ScavTrap Default Contrutor called!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " is being Destroyed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other )
: ClapTrap( other )
{
	this->_Hp = other._Hp;
	this->_Ep = other._Ep;
	this->_Ad = other._Ad;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name )
: ClapTrap( name )
{
	_Hp = 100;
	_Ep = 50;
	_Ad = 20;
	std::cout << "ScavTrap Parameterized Contructor called!" << std::endl;
}

void ScavTrap::attack( const std::string& target )
{
	if (_Ep == 0) return;
	std::cout << "ScavTrap `" << _name << "` attacks " << target << ", causing " << _Ad << " points of damage!" << std::endl;
	_Ep--;
}
void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap" << _name << "is now in Gate leeper mode!!!" << std::endl;
}
ScavTrap&	ScavTrap::operator=( const ScavTrap& another )
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
