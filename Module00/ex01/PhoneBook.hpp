#pragma once

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
	//access specifiers
	private:
      int ind = 0;
      Contact users[8];

	//access specifiers
	public:
      void add_()
      {
         std::cout << "FirstName: ";
         std::getline(std::cin, users[ind].FirstName);
         std::cout << "LastName: ";
         std::getline(std::cin, users[ind].LastName);
         std::cout << "NickName: ";
         std::getline(std::cin, users[ind].NickName);
         std::cout << "Darkest Secret: ";
         std::getline(std::cin, users[ind].DarkestSecret);
         users[ind].index = ind;
         ind = (ind + 1) % 8;
      }
      void search_()
      {
         std::cout << " -----------------------------------------------" << "\n";
         std::cout << "|      index| first Name|  last name|   nickname|" << "\n";
         std::cout << " -----------------------------------------------" << "\n";
         for (int i = 0; i < 8; i++)
         {
            if (users[i].index == -1)
               break;
            std::cout << std::setw(10); 
            std::cout << users[i].index << "|"; 
            std::cout << std::setw(10); 
            std::cout << users[i].FirstName << "|";; 
            // std::cout << std::setw(10); 
            // std::cout <<"|" << users[i].LastName << "|" << users[i].NickName << "|\n"; 
         }
      }
};
