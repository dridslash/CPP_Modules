/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:54:34 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 17:28:37 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure():AMateria("cure"){}

Cure::Cure(const std::string &n):AMateria("cure"){type = n;}

Cure::~Cure(){}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter &target){
   std::cout<<"* heals 💊 "<<target.getName()<<"'s wounds *\n";
}