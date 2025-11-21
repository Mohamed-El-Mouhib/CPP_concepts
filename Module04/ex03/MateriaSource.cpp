#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource( void )
: _idx( 0 )
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& another )
: _idx( another._idx )
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = another._inventory[i]->clone();
}

MateriaSource& MateriaSource::operator=( const MateriaSource& another )
{
	if (this != &another)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = another._inventory[i];
		}
		_idx = another._idx;
	}

	return *this;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria( AMateria* Materia )
{
	if (_idx < 4 && Materia)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (Materia == _inventory[i])
				return;
		}
		_inventory[_idx] = Materia;
		++_idx;
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	return NULL;
}
