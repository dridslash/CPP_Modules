/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:58:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 09:25:54 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog constructor called\n";
}

Dog::Dog(const std::string &n):Animal(n){
    std::cout<<"Dog parameterized constructor called\n";
}

Dog::Dog(const Dog& cop){
    type = cop.type;
}

Dog& Dog::operator=(const Dog& cop){
    type = cop.type;
    return (*this);
}

Dog::~Dog(){
    std::cout<<"Dog destructor called\n";
}

void Dog::makeSound()const{
    std::cout<<"WOOF WOOF!!!!\n";
}

std::string Dog::getType()const{
    return (type);
}