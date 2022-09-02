/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:38:47 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 17:45:02 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap(){
    std::cout<<"FragTrap constructor called\n";
}

FragTrap::FragTrap(const std::string &n){
    name = n;
    Hitpoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
     std::cout<<"FragTrap parametirezed constructor called\n";   
}

FragTrap::FragTrap(const FragTrap& cop){
    name = cop.name;
    Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& cop){
     name = cop.name;
   Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout<<"FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void){
    std::cout<<"FragTraaap high five!!\n";
}