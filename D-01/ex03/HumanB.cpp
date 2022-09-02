/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:56:19 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/10 11:00:24 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB():wp(NULL){}
HumanB::HumanB(std::string n) : wp(NULL), name(n){std::cout<<name<<" is here\n";}
HumanB::~HumanB(){std::cout<<name<<" is dead despite having a Weapon\n";}

void HumanB::attack(){
    if (!wp)
    std::cout<<name<<" attacks with their "<<"lack of weapons!!"<<std::endl;
    else
    std::cout<<name<<" attacks with their "<<wp->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &w){
    wp = &w;
}