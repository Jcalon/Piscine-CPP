/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:47:04 by jcalon            #+#    #+#             */
/*   Updated: 2022/08/10 15:29:49 by jcalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial ):_amount(initial), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = getNbAccounts();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial;
}

Account::Account(void)
{
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
 	_totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
    _amount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposits:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawals:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::cout << "[20220810_091532] ";
}