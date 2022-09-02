/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:15:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 17:42:54 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout<<"DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &n):ClapTrap(n + "_clap_name"){
    name = n;
    Hitpoints = 100;
    EnergyPoints = 50;
    AttackDamage = 30;
    std::cout<<"DiamondTrap parametirezed constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& cop){
    name = cop.name;
    Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cop){
    name = cop.name;
   Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout<<"DiamondTrap destructor called\n";
}

void DiamondTrap::whoAmI(){
    std::cout<<"Im :"<< name<<" My claptrap name is: "<<ClapTrap::name<<"\n";
}