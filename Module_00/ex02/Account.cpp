/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 23:46:02 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/22 19:56:11 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}
Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	this->_displayTimestamp();
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << this->checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if ((this->checkAmount() - withdrawal) < 0){
		std::cout << "refused" << std::endl;	
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}
int		Account::checkAmount( void ) const{
	return (this->_amount);
}
void	Account::displayStatus( void ) const{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
    std::time_t	t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) << (now->tm_mday) << "_";
	std::cout << (now->tm_hour) << (now->tm_min) << (now->tm_sec) << "] ";
}
