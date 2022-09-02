/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:52:11 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 13:14:13 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(){
    int N = 5;
   Zombie *p  = zombieHorde(5,"h");
    for (int i = 0; i < N ; i++)
    {
        p[i].announce();
    }
    delete [] p;
}