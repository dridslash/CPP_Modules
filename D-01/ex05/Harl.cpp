/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:01:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 13:17:36 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(){
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void Harl::info (){
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning (){
  std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";  
}

void Harl::error (){
  std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::handl_non_level(){
    std::cout<<"NO LEVEL FOUND\n";
}

void Harl::complain(std::string level){
    int index_level = 4;
    (void)level;
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    int lp = 0;
    while(lp < 4){
        if ((level.compare(levels[lp])) == 0){
            index_level = lp;
            break;
        }
        lp++;
    }
    void (Harl::*func_complaints[5])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error,&Harl::handl_non_level};
    (this->*func_complaints[index_level])();
}