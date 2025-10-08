#include "PhoneBook.hpp"

int main()
{
   PhoneBook book;
   std::string input;

   std::cout << "ADD, SEARCH, EXIT" << "\n";
   while (true)
   {
      std::cout << "COMMAND: ";
      if (!std::getline(std::cin, input))
         break ;
      else if (input == "ADD")
         book.add_();
      else if (input == "EXIT")
         break;
      else if (input == "SEARCH")
         book.search_();
      else if (input != "\0")
         std::cout << "COMMAND NOT FOUND" << "\n";
   }
}
