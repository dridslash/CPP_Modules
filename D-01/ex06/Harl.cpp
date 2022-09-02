/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:01:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 16:04:22 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(){
    std::cout<<"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!\n";
}

void Harl::info (){
    std::cout<<"[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning (){
  std::cout<<"[ WARNING ]I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n";  
}

void Harl::error (){
  std::cout<<"[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level){
    Harl call_harl;
    int index_level = (level == "Debug") * 0 + (level == "INFO") * 1 + (level == "WARNING") * 2 + (level == "ERROR") * 3;
    void (Harl::*func_complaints[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    (call_harl.*func_complaints[index_level])();
}