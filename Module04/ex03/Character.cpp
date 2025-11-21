#include "Character.hpp"

Character::Character( void )
:_name( "DefaultCharacter" ), _idx( 0 ), _tidx( 0 )
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character( const std::string& name )
:_name( name ), _idx( 0 ), _tidx( 0 )
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character( const Character& another )
:_name( another._name ), _idx( another._idx )
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = another._inventory[i]->clone();
	}
}

Character Character::operator=( const Character& another)
{
	if (this !=	&another)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = another._inventory[i]->clone();
		}
		this->_idx = another._idx;
	}

	return *this;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < _tidx; ++i)
		delete _tmp[i];
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_idx < 4)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (m == _inventory[i])
				return;
		}
		_inventory[_idx] = m;
		++_idx;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > _idx || !_inventory[idx])
		return;
	_tmp[_tidx] = _inventory[idx];
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > _idx || !_inventory[idx])
		return;
	_inventory[idx]->use(target);
}
