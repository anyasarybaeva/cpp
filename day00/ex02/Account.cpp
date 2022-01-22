#include "Account.hpp"
#include<iostream>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account()
{
	_nbAccounts-=1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:"<< _amount<<";closed"<<std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if(_amount<withdrawal)
	{
		std::cout << "index:" <<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
		return(0);
	}
	else
	{
		_nbWithdrawals+=1;
		std::cout << "index:" <<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:"<<_amount-withdrawal<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		_amount-=withdrawal;
		_totalAmount-=withdrawal;
		_totalNbWithdrawals+=1;
	}
	return(1);
}
int		Account::checkAmount(void)const
{
	return (_amount > 0);
}
void	Account::_displayTimestamp(void)
{ 
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout <<"["<< (now->tm_year + 1900);
	std::cout.width(2);
	std::cout.fill( '0' );
	std::cout<< (now->tm_mon + 1); 
	std::cout.width(2);
	std::cout.fill( '0' );
	std::cout<<now->tm_mday<<"_";
	std::cout.width(2);
	std::cout.fill( '0' );
	std::cout<<now->tm_hour;
	std::cout.width(2);
	std::cout.fill( '0' );
	std::cout<<now->tm_min;
	std::cout.width(2);
	std::cout.fill( '0' );
	std::cout<<now->tm_sec<<"] ";
}
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
	<< _totalAmount <<";deposits:" << _totalNbDeposits 
	<< ";withdrawals:" << _totalNbWithdrawals <<std::endl;
}
Account::Account(void)
{
	_accountIndex= _nbAccounts++;
	_amount=0;
	_nbDeposits=0;
	_nbWithdrawals=0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:"
	<< _amount<<";created"<<std::endl;
}
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount+=_amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" 
	<< _amount << ";created" << std::endl;
}

void	Account::displayStatus(void)const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << 
	";amount:" << _amount << ";deposits:" <<	_nbDeposits 
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits+=1;
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex<<";p_amount:"<<_amount
	<<";deposit:"<<deposit<<";amount:"<<_amount+deposit<< ";nb_deposits:"
	<<_nbDeposits<<std::endl;
	_amount+=deposit;
	_totalNbDeposits+=1;
	_totalAmount+=deposit;
}

int	Account::getNbAccounts()
{
	return(_nbAccounts);
}
int	Account::getTotalAmount()
{
	return(_totalAmount);
}
int	Account::getNbDeposits()
{
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}
