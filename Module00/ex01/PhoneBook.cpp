#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

static bool phone_check_(std::string &input)
{
   for (size_t i = 0; input.size() > i; i++)
   {
      char c = input[i];
      if ((!(c >= '0' && c <= '9') && i != 0)
         || (i == 0 && !(c >= '0' && c <= '9') && c != '+'))
      {
         std::cout << "not a valid PhoneNumber" << "\n"; return false;
      }
   }
   return true;
}

bool empty_( std::string &str)
{
   for (size_t i = 0; i < str.size(); i++)
   {
      if (str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
         return false;
   }
   return true;
}

void PhoneBook::add_( void )
{
   while (1)
   {
      std::cout << "PhoneNumber: ";
      if (!std::getline(std::cin, users[ind].PhoneNumber)) exit(1);
      if ( phone_check_(users[ind].PhoneNumber) && !empty_(users[ind].PhoneNumber) )
         break;
   }
   while (1)
   {
      std::cout << "FirstName: ";
      if (!std::getline(std::cin, users[ind].FirstName)) exit(1);
      if (!empty_(users[ind].FirstName))
         break;
   }
   while (1)
   {
      std::cout << "LastName: ";
      if (!std::getline(std::cin, users[ind].LastName)) exit(1);
      if (!empty_(users[ind].LastName))
         break;
   }
   while (1)
   {
      std::cout << "NickName: ";
      if (!std::getline(std::cin, users[ind].NickName)) exit(1);
      if (!empty_(users[ind].NickName))
         break;
   }
   while (1)
   {
      std::cout << "Darkest Secret: ";
      if (!std::getline(std::cin, users[ind].DarkestSecret)) exit(1);
      if (!empty_(users[ind].DarkestSecret))
         break;
   }
   users[ind].index = ind;
   ind = (ind + 1) % 8;
}

PhoneBook::PhoneBook()
{
   ind = 0;
}

static bool  check_input(std::string& str)
{
   for (size_t i = 0; str.size() > i; i++)
   {
      char c = str[i];
      if (!std::isdigit(c))
      {
         std::cout << "Index must be valid numeric value." << "\n"; return false;
      }
      if (i > 1)
      {
         std::cout << "Index out of bounds. Enter a valid value." << "\n"; return false;
      }
   }
   return true;
}

static void list_info(long index, Contact (&users)[8])
{
   if (index < 0 || index > 7)
      std::cout << "Index out of bounds. Enter a valid value." << "\n";
   else if (users[index].index != -1)
   {
      std::cout << "First Name : "<< users[index].FirstName << "\n"
                << "Last Name : "<< users[index].LastName << "\n"
                << "Nickname : "<< users[index].NickName << "\n"
                << "Phone Number : "<< users[index].PhoneNumber << "\n"
                << "Darkest Secret : "<< users[index].DarkestSecret << "\n";
   }
   else
      std::cout << "this user no setted yet" << "\n";
}

static void list_ontable(Contact (&users)[8])
{
   for (size_t i = 0; i < 8; i++)
   {
      if (users[i].index == -1) break;
      std::cout << "|" << std::setw(10) << users[i].index;
      if (users[i].FirstName.size() < 10)
         std::cout << "|" << std::setw(10) << users[i].FirstName.substr(0, 10);
      else
         std::cout << "|" << std::setw(9) << users[i].FirstName.substr(0, 9) << ".";
      if (users[i].LastName.size() < 10)
         std::cout << "|" << std::setw(10) << users[i].LastName.substr(0, 10);
      else
         std::cout << "|" << std::setw(9) << users[i].LastName.substr(0, 9) << ".";
      if (users[i].NickName.size() < 10)
         std::cout << "|" << std::setw(10) << users[i].NickName.substr(0, 10);
      else
         std::cout << "|" << std::setw(9) << users[i].NickName.substr(0, 9) << ".";
      std::cout << "|\n" << " ----------" << " ----------" << " ----------" << " ----------" << "\n";
   }
}

void PhoneBook::search_()
{
   std::string input;

   std::cout << " ----------" << " ----------" << " ----------" << " ----------" << "\n";
   std::cout << "|" << std::setw(10) << "index";
   std::cout << "|" << std::setw(10) << "FirstName";
   std::cout << "|" << std::setw(10) << "LastName";
   std::cout << "|" << std::setw(10) << "NickName" << "|\n";
   std::cout << " ----------" << " ----------" << " ----------" << " ----------" << "\n";
   list_ontable(users);
   std::cout << "SEARCH FOR INDEX: ";
   if (!std::getline(std::cin, input)) exit(1);
   if (!check_input(input)) return;
   list_info(std::atol(input.c_str()), users);
}
