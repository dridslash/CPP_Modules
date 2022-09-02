/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:33:48 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 16:38:25 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

 Animal::Animal(){
    std::cout<<"Animal constructor called\n";
 }

Animal::Animal(const std::string &n):type(n){
    std::cout<<"Animal parameterized constructor called\n";
}

Animal::Animal(const Animal& cop){
    type = cop.type;
}

Animal& Animal::operator=(const Animal& cop){
    type = cop.type;
    return (*this);
}
    
Animal::~Animal(){
    std::cout<<"Animal destructor called\n";
}
