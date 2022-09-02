/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:00:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/10 11:00:26 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &w):wp(w){}
HumanA::HumanA(std::string n,Weapon &w) : wp(w), name(n){std::cout<<name<<" is here\n";}
HumanA::~HumanA(){std::cout<<name<<" is dead despite having a Weapon\n";}

void HumanA::attack(){
    std::cout<<name<<" attacks with their "<<wp.getType()<<std::endl;
}