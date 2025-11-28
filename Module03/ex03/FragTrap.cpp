#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void )
:ClapTrap( "DefaultFrag" )
{
	_Hp = 100;
	_Ep = 100;
	_Ad = 30;
	std::cout << "FragTrap Default constructor Called!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy )
:ClapTrap( copy )
{
	std::cout << "FragTrap Copy constructor Called!" << std::endl;
}

FragTrap::FragTrap( const std::string& name )
:ClapTrap( name )
{
	_Hp = 100;
	_Ep = 100;
	_Ad = 30;
	std::cout << "FragTrap Parameterized constructor Called!" << std::endl;
}
FragTrap::~FragTrap( void ) { std::cout << "FragTrap " << _name << " is being Destroyed!!" << std::endl; }

void	FragTrap::highFivesGuys( void )
{
	for (int i = 1; i <= 5; i++)
		std::cout << "high-fives" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& another )
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
