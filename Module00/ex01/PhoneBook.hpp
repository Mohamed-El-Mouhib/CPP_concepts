#pragma once

#include "Contact.hpp"

class PhoneBook
{
	//access specifiers
	private:
      int ind;
      Contact users[8];

	//access specifiers
	public:
      PhoneBook();
      void add_();
      void search_();
};
