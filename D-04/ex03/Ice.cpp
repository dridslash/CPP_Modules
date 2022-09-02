/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:44:58 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 17:28:44 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){}

Ice::Ice(const std::string &n):AMateria("ice"){type = n;}

Ice::~Ice(){}

AMateria* Ice::clone() const{
    return (new Ice());
}

void Ice::use(ICharacter &target){
 std::cout<<"* shoots an ice ❄️  bolt at "<<target.getName()<<"*\n";
}
