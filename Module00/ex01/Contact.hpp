#pragma once

#include <iostream>
#include <string>

class Contact
{
   public:
      Contact( void );
      int index;
      std::string FirstName;
      std::string NickName;
      std::string LastName;
      std::string PhoneNumber;
      std::string DarkestSecret;
};
