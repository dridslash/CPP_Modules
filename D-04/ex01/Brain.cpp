/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:50:53 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 14:08:43 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(){
    std::cout<<"Brain constructed\n";
}

Brain::~Brain(){
    std::cout<<"Brain destructor\n";
}

void Brain::Set_ideas(std::string nm){
    for (int i = 0; i < 100;i++){
        ideas[i] = nm;
    }
}

std::string Brain::Get_idea()const{
    return (ideas[0]);
}
