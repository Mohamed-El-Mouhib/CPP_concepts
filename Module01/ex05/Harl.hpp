#pragma once

#include <string>
#include <map>

class	Harl
{
private:
	std::map<std::string, int> table;
	std::vector<void (Harl::*)()> ftable;
	// std::map<std::string, void (Harl::*)()> table;
	int it;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl( void );
	void complain( std::string level );
};
