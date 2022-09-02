/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:44:39 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/11 17:24:46 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){std::cout<<"Weapon const called\n";}
Weapon::Weapon(std::string t) : type(t){std::cout<<"Weapon const called\n";}
Weapon::~Weapon(){std::cout<<"Weapon destruct called\n";}

const std::string &Weapon::getType() const{
    return type;
}

void Weapon::setType(std::string t){
    type  = t;
}