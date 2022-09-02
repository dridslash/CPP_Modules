/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:32:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 14:26:38 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap sv("scavt1");
    ScavTrap sv2("scavt2");
    sv.attack(sv2.Get_name());
    sv2.takeDamage(sv.Get_AttackDamage());
    std::cout<<sv2.Get_name()<<" Hitpoints are : "<<sv2.Get_Hitpoints()<<"\n";
}   