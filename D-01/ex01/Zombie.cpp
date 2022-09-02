/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:46:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/09 20:03:10 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
    std::cout<<name<<" will not take any brains any time soon!!\n";
}

Zombie::Zombie(std::string n){name = n;}

void Zombie::announce(void){
    std::cout<<name<<": "<<"BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string n){
    name = n;
}