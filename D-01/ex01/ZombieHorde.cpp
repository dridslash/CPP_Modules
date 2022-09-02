/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:57:28 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 13:13:42 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
   Zombie *z = new Zombie[N];
   for (int i = 0; i < N ; i++){
    z[i].setName(name + std::to_string(i));
   }
   return z;
}