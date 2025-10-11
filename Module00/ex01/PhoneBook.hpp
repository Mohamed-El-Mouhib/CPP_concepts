#pragma once

#include "Contact.hpp"

class PhoneBook
{
	private:
      int ind;
      Contact users[8];
	public:
      PhoneBook();
      void add_( void );
      void search_( void );
};
