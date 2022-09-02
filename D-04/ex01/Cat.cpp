/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:53:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 13:47:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"),br(new Brain()){
    std::cout<<"Cat constructor called\n";
}

Cat::Cat(const std::string &n):Animal(n){
    br = new Brain();
    std::cout<<"Cat parameterized constructor called\n";
}

Cat::Cat(const Cat& cop){
    type = cop.type;
    br = new Brain();
    br = cop.br;
}

Cat& Cat::operator=(const Cat& cop){
    type = cop.type;
    br = new Brain();
    br = cop.br;
    return (*this);
}

Cat::~Cat(){
    delete br;
    std::cout<<"Cat destructor called\n";
}

void Cat::makeSound()const{
    std::cout<<"Meow Meow Meow!!!!\n";
}

std::string Cat::getType()const{
    return (type);
}

Brain* Cat::Get_Brain()const{
    return(br);
}