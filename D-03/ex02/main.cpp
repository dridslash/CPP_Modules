/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:44:36 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 14:27:33 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    FragTrap ft1("ft1");
    FragTrap ft2("ft2");
    ft1.attack(ft2.Get_name());
    ft2.takeDamage(ft1.Get_AttackDamage());
    std::cout<<ft2.Get_name()<<" Hitpoints are : "<<ft2.Get_Hitpoints()<<"\n";
    ft1.highFivesGuys();
}