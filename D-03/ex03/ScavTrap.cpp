/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:22:28 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/29 09:36:20 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<<"ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const std::string &n){
    name = n;
    Hitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout<<"ScavTrap parametirzed constructor called\n";
}

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& cop){
    name = cop.name;
    Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cop){
     name = cop.name;
   Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string &target){
    if (Hitpoints > 0 && EnergyPoints > 0 && AttackDamage > 0){
       std::cout<<"ScavTrap "<<name<<" attacks "<<target<<" causing "<<AttackDamage<<" points of damage!\n";
    }
}

void ScavTrap::guardGate(){
    std::cout<<"ScavTrap is now in Gate keeper mode!!\n";
}