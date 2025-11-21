#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		AMateria			*_tmp[4];
		AMateria			*_inventory[4];
		std::string		_name;
		int				_idx; // inventory indexer
		int				_tidx; // tmp indexer

	public:
		Character( void );
		Character( const Character& );
		Character( const std::string& );
		Character operator=( const Character& );
		~Character( void );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
