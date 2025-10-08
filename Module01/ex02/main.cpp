#include "string"
#include "iostream"
#include <string>

int main( void )
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}
