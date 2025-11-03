#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
: _name( "unknown" ), _Hp( 10 ), _Ep( 10 ), _Ad( 0 )
{
	std::cout << "ClapTrap default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name )
: _name( name ), _Hp( 10 ), _Ep( 10 ), _Ad( 0 )
{
	std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& another )
:_name( another._name ), _Hp( another._Hp ), _Ep( another._Ep), _Ad( another._Ad ) 
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& another )
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

void ClapTrap::attack( const std::string& target )
{
	if (_Ep == 0) return;
	std::cout << "ClapTrap `" << _name << "` attacks " << target << ", causing " << _Ad << " points of damage!" << std::endl;
	_Ep--;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (_Ep == 0) return;
	std::cout << "ClapTrap `" << _name << "` repaired " << amount << " of Hit point" << std::endl;
	_Hp += amount;
	_Ep--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (amount > _Hp) _Hp = 0;
	else _Hp -= amount;
	std::cout << "ClapTrap `" << _name << "` Took " << amount << " of Attack Damage" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " is being Destroyed" << std::endl;
}
