#include "Account.hpp"
#include <iostream>
#include <ostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
   return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
   return _totalAmount;
}

int Account::getNbDeposits( void )
{
   return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
   return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
   std::time_t tmp;
   std::tm *now;

   tmp = std::time(NULL);
   now = std::localtime(&tmp);
   std::cout << "["
            << ( now->tm_year + 1900 )
            << ( now->tm_mon + 1 )
            << now->tm_mday
            << "_"
            << now->tm_hour
            << now->tm_min
            << now->tm_sec
            << "] ";
}

void	Account::displayStatus( void ) const
{
   Account::_displayTimestamp();
   std::cout << "index:" << this->_accountIndex
      << ";amount:" << this->_amount
      << ";deposits:" << this->_nbDeposits
      << ";withdrawals:" << this->_nbWithdrawals
      << std::endl;
}

Account::~Account( void )
{
   Account::_displayTimestamp();
   std::cout << "index:" << this->_accountIndex
      << ";amount:" << this->_amount
      << ";closed" << std::endl;
}
void	Account::displayAccountsInfos( void )
{
   Account::_displayTimestamp();
   std::cout << "accounts:" << getNbAccounts() << ";"
         << "total:" << getTotalAmount() << ";"
         << "deposits:" << getNbDeposits() << ";"
         << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
   Account::_displayTimestamp();
   std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;

   _totalAmount += deposit;
   this->_amount += deposit;
   this->_nbDeposits++;
   _totalNbDeposits++;

   std::cout << ";deposits:" << deposit << ";amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
   Account::_displayTimestamp();
   std::cout << "index:" << this->_accountIndex
      << ";p_amount:" << this->_amount;

   if (withdrawal > this->_amount)
   {
      std::cout << ";withdrawal:" << "refused" << "\n";
      return false;
   }

   this->_amount -= withdrawal;
   this->_nbWithdrawals++;
   _totalNbWithdrawals++;
   std::cout << ";withdrawal:" << withdrawal
      << ";amount:" << this->_amount
      << ";nb_withdrawals:" << this->_nbWithdrawals
      << std::endl;
   return true;
}

Account::Account( int initial_deposit )
:_accountIndex(_nbAccounts), _amount(initial_deposit)
{
   _nbAccounts++;
   _totalAmount += initial_deposit;
   Account::_displayTimestamp();
   this->_nbDeposits = 0;   
   this->_nbWithdrawals = 0;
   std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
}
