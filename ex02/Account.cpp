/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:38 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/08 14:59:52 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	char		buffer[19];
	time_t		rawtime;
	struct tm	*timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, 19, "[%G%m%d_%H%M%S] ", timeinfo);

	std::cout << buffer;
}

Account::Account(int initial_deposit): _amount(initial_deposit) {
	_nbAccounts = 0;
	_nbWithdrawals = 0;

	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created"
				<< std::endl;
};

Account::~Account(void) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed"
				<< std::endl;
};

int	Account::getNbAccounts(void)	{ return _nbAccounts; }

int	Account::getTotalAmount(void)	{ return _totalAmount; }

int	Account::getNbDeposits(void)	{ return _totalNbDeposits; }

int	Account::getNbWithdrawals(void)	{ return _totalNbWithdrawals; }

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;

	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
};

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:";

	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_totalAmount -= withdrawal;

	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout	<< withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;

	return true;
};

int	Account::checkAmount(void) const {
	return _amount;
};

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:"
				<< _nbWithdrawals << std::endl;
};
