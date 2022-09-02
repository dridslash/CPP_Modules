/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:41:16 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 12:02:06 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

void Account::_displayTimestamp(){
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
    std::string year = std::to_string(1900 + local_time->tm_year);
    std::string month = "0";
    month.append(std::to_string(1 + local_time->tm_mon));
    std::string day = "0";
    day.append(std::to_string(local_time->tm_mday));
    std::string time_h = std::to_string(local_time->tm_hour);
    if (time_h.length() == 1){
        time_h = "0";
        time_h.append(std::to_string(local_time->tm_hour));
    }
    std::string time_min = std::to_string(local_time->tm_min);
    if (time_min.length() == 1){
        time_min = "0";
        time_min.append(std::to_string(local_time->tm_min));
    }
    std::string time_sec = std::to_string(local_time->tm_sec);
    if (time_sec.length() == 1){
        time_sec = "0";
        time_sec.append(std::to_string(local_time->tm_sec));
    }
    std::cout<<"["<<year<<month<<day<<"_"<<time_h<<time_min<<time_sec<<"] ";
}

Account::Account(int initial_deposit){
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created\n";
    _nbAccounts++;
    _totalAmount+=_amount;
}

Account::~Account(){
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed\n";
}

void Account::displayAccountsInfos(){
    Account::_displayTimestamp();
   std::cout<<"accounts:"<<getNbAccounts()<<";total:"<<getTotalAmount()<<";deposits:"<<getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<"\n";
   _totalAmount = 0;
}

void Account::displayStatus() const{
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<"\n";
}

bool Account::makeWithdrawal(int withdrawal){
    if (_amount < withdrawal){
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused\n";
    _totalAmount+= _amount;
    }
    else{
    this->_nbWithdrawals = 1; 
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:"<<_amount - withdrawal<<";nb_withdrawals:"<<_nbWithdrawals<<"\n";
    _totalAmount+= (_amount - withdrawal);
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    }
    return true;
}

void Account::makeDeposit(int deposit){
    this->_nbDeposits = 1;
    Account::_displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposit:"<< deposit <<";amount:"<< _amount + deposit <<";nb_deposits:"<<_nbDeposits<<"\n";
    _totalAmount+= _amount + deposit;
    _totalNbDeposits++;
    _amount += deposit;
}

int Account::checkAmount()const{
    return 1;
}
