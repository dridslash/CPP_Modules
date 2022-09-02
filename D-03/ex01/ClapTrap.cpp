/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:48:47 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 14:26:03 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Hitpoints(10),EnergyPoints(10),AttackDamage(0){
    std::cout<<"Clap_Trap constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name):name(name),Hitpoints(10),EnergyPoints(10),AttackDamage(0){
    std::cout<<"Clap_Trap parametarized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& cop){
    name = cop.name;
    Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cop){
    name = cop.name;
   Hitpoints = cop.Hitpoints;
    EnergyPoints = cop.EnergyPoints;
    AttackDamage = cop.AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout<<"Clap_Trap destructor called\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    if (Hitpoints > 0 && EnergyPoints > 0){
        Hitpoints-=amount;
        EnergyPoints--;
        std::cout<<"took damage Hitpoints and EnergyPoints receded\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Hitpoints > 0 && EnergyPoints > 0){
        Hitpoints-=amount;
        EnergyPoints--;
        std::cout<<"repaired Hitpoints and EnertPoints receded\n";
    }
}
    
void ClapTrap::attack(const std::string &target){
    if (Hitpoints > 0 && EnergyPoints > 0 && AttackDamage > 0){
        std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" causing "<<AttackDamage<<" points of damage!\n";
    }
}

std::string ClapTrap::Get_name()const{
    return ((*this).name);
}

int ClapTrap::Get_Hitpoints()const{
    return ((*this).Hitpoints);
}

int ClapTrap::Get_EnergyPoints()const{
    return ((*this).EnergyPoints);
}

int ClapTrap::Get_AttackDamage()const{
    return ((*this).AttackDamage);
}

void ClapTrap::Set_name(const std::string &name){
    (*this).name = name;
}
