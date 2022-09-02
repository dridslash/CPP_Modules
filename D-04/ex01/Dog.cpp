/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:58:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 14:57:47 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"),br(new Brain()){
    std::cout<<"Dog constructor called\n";
}

Dog::Dog(const std::string &n):Animal(n){
    br = new Brain();
    std::cout<<"Dog parameterized constructor called\n";
}

Dog::Dog(const Dog& cop){
    type = cop.type;
    br = new Brain();
    br->Set_ideas(cop.Get_Brain()->Get_idea());
}

Dog& Dog::operator=(const Dog& cop){
    type = cop.type;
    br = new Brain();
    br->Set_ideas(cop.Get_Brain()->Get_idea());
    return (*this);
}

Dog::~Dog(){
    delete br;
    std::cout<<"Dog destructor called\n";
}

void Dog::makeSound()const{
    std::cout<<"WOOF WOOF!!!!\n";
}

std::string Dog::getType()const{
    return (type);
}

Brain* Dog::Get_Brain()const{
    return(br);
}