/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:23:11 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 11:56:10 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout<<"WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string &n){
    type = n;
    std::cout<<"WrongAnimal parameterized constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cop){
    type = cop.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &cop){
    type = cop.type;
    return (*this);
}
WrongAnimal::~WrongAnimal(){
    std::cout<<"WrongAnimal destructor constructor called\n";
}

std::string WrongAnimal::getType()const{
    return (type);
}

void WrongAnimal::makeSound() const{}