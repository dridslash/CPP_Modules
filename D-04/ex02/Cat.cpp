/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:53:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 09:25:39 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat constructor called\n";
}

Cat::Cat(const std::string &n):Animal(n){
    std::cout<<"Cat parameterized constructor called\n";
}

Cat::Cat(const Cat& cop){
    type = cop.type;
}

Cat& Cat::operator=(const Cat& cop){
    type = cop.type;
    return (*this);
}

Cat::~Cat(){
    std::cout<<"Cat destructor called\n";
}

void Cat::makeSound()const{
    std::cout<<"Meow Meow Meow!!!!\n";
}

std::string Cat::getType()const{
    return (type);
}