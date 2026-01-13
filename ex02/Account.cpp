/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:43:44 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/13 23:07:23 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <sys/time.h>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(){
	return _nbAccounts;
}
int		Account::getTotalAmount(){
	return _totalAmount;
}
int		Account::getNbDeposits(){
	return _totalNbDeposits;
}
int		Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;
}
Account::Account(int initial_deposit){
	_displayTimestamp();
	this->_accountIndex = getNbAccounts();
	std::cout << "index:" << _accountIndex;
	_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	std::cout << ";amount:" << checkAmount() << ";created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}
Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}
void	Account::makeDeposit(int deposit){
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
	if (checkAmount() < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << checkAmount() << ";nb_withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
	return true;
}
void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
int	Account::checkAmount() const{
	return _amount;
}

void	Account::_displayTimestamp(void){
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	std::cout << "[" << tv.tv_sec << "_" << tv.tv_usec << "] ";
}
