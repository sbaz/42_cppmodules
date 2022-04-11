/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:28:31 by pceccoli          #+#    #+#             */
/*   Updated: 2022/04/06 14:22:24 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)//
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)//
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)//
{
	time_t	timestamp;
	char	buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "]";
}

void	Account::makeDeposit(int deposit)//
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

int	Account::checkAmount(void) const//
{
	if (_amount < 0)
		return (0);
	return (1);
}

bool	Account::makeWithdrawal(int withdrawal)//
{
	bool	result;

	_amount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount + withdrawal;
	if (checkAmount() == 1)
	{
		result = 1;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	}
	else
	{
		result = 0;
		_amount += withdrawal;
		std::cout << ";withdrawal:refused";
	}
	std::cout << std::endl;
	return (result);
}


int	Account::getNbAccounts(void)	{return (_nbAccounts);}//
int	Account::getTotalAmount(void)	{return (_totalAmount);}//
int	Account::getNbDeposits(void)	{return (_totalNbDeposits);}//
int	Account::getNbWithdrawals(void)	{return (_totalNbWithdrawals);}//

void	Account::displayAccountsInfos(void)//
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
void	Account::displayStatus(void) const//
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}