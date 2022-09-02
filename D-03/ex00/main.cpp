/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:37:15 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/26 19:08:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap finrir("finrir");
    ClapTrap tyr("tyr");
    finrir.attack(tyr.Get_name());
    finrir.Get_AttackDamage();
    tyr.takeDamage(finrir.Get_AttackDamage());
}