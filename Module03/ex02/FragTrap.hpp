#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap( const FragTrap& );
		FragTrap( const std::string& );
		FragTrap& operator=( const FragTrap& );

		void	highFivesGuys( void );
};
