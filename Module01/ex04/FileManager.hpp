#include <string>
#include <iostream>
#include <fstream>

class	NotSed
{
	private:
		std::string	filename_;
		std::string	outfile_;
		std::string	target_;
		std::string	newstr_;

	public:
		void readtilleof( void );
		std::fstream	infs;
		std::fstream	outfs;
		NotSed( std::string filename, std::string target, std::string newstr);
		~NotSed( void );

};
