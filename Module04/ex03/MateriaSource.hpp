#ifndef MATERIASOURCE_HPP 
#define MATERIASOURCE_HPP 

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria			*_inventory[4];
		int				_idx; // inventory indexer

	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& );
		MateriaSource& operator=( const MateriaSource& );
		~MateriaSource( void );

		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif
