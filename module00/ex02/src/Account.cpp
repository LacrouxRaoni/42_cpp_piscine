/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:00:20 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:00:21 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "../includes/Account.hpp"



int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){
};

Account::Account(int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(){
	return (_nbAccounts);
}

int Account::getTotalAmount(){
	return (_totalAmount);
}

int Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}


void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposit:" << _totalNbDeposits << ";withdrals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits = 1;
	_totalNbDeposits += _nbDeposits;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_mount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawl ){
	if (_amount < withdrawl)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_mount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		int p_amount = _amount;
		_amount -= withdrawl;
		_totalAmount -= withdrawl;
		_nbWithdrawals = 1;
		_totalNbWithdrawals += _nbWithdrawals;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_mount:" << p_amount << ";withdrawal:" << withdrawl << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return true;
}


int Account::checkAmount() const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << _totalNbDeposits << ";withdrawls:" << _totalNbWithdrawals << std::endl;
	return _totalAmount;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposit:" << _nbDeposits << ";withdraw:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(){
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 << 
	std::setfill ('0') << std::setw(2) << timenow.tm_mon + 1 << 
	std::setfill ('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill ('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill ('0') << std::setw(2) << timenow.tm_min <<
	std::setfill ('0') << std::setw(2) << timenow.tm_sec << "] ";
}
