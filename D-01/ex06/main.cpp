/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:01:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 16:04:29 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc , char **argv){
    Harl harl_filtered;
    if (argc == 2){
    std::string level = argv[1];
    int index_level = 4;
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    int lp = 0;
    while(lp < 4){
        if ((level.compare(levels[lp])) == 0){
            index_level = lp;
            break;
        }
        lp++;
    }
    switch(index_level){
        case 0:
            harl_filtered.debug();
        case 1:
            harl_filtered.info();
        case 2:
            harl_filtered.warning();
        case 3:
            harl_filtered.error();
            break;
        default:
            std::cout<<"[ Probably complaining about insignificant problems ]\n";
            break;
       } 
    }
    else{
        std::cout<<"[Im not this high level im just a lego]\n";
    }
}