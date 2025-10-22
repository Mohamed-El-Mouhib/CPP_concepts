#include "FileManager.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

NotSed::NotSed( std::string	filename, std::string target, std::string newstr)
: filename_(filename), outfile_(filename + ".replace"), target_(target), newstr_(newstr)
{
	if (filename_.size() == 0 || target.size() == 0 || newstr.size() == 0)
	{
		std::cout << "Error: Please ensure Arguments are not empty" << std::endl;
		std::exit( 1 );
	}
	this->infs.open(filename, std::fstream::in);
	if (!this->infs)
	{
		std::cout << "Error: Failed to open <" << filename << ">" << std::endl;
		std::exit( 1 );
	}
	this->outfs.open(this->outfile_, std::fstream::out);
	if (!this->outfs)
	{
		std::cout << "Error: Failed to open <" << this->outfile_ << ">" << std::endl;
		this->infs.close();
		exit( 1 );
	}
}

NotSed::~NotSed( void )
{
	this->infs.close();
	this->outfs.close();
}

void NotSed::readtilleof( void )
{
	std::string input;

	while (std::getline(infs, input))
	{
		size_t pos = 0;
		while ((pos = input.find(this->target_, pos)) != std::string::npos)
		{
			outfs << input.substr( 0, pos ) << newstr_;
			input = input.substr( pos + this->target_.size() );
			pos = 0;
		}
		outfs << input << std::endl;
	}
}
