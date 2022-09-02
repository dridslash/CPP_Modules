/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:47:36 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 17:28:12 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const &ty):type(ty){}

std::string const& AMateria::getType()const{
    return (type);
}

void AMateria::Set_type(const std::string &tp){
    type = tp;
}

AMateria::~AMateria(){}

void AMateria::use(ICharacter& target){
     std::cout<<"* shoots a thing at "<<target.getName()<<"*\n";
}