/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:02:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 13:31:09 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat():WrongAnimal("im a defected Cat"){
    std::cout<<"WrongCat constructor called\n";
}

WrongCat::WrongCat(const std::string &n):WrongAnimal(n){
    std::cout<<"WrongCat parameterized called\n";
}

WrongCat::WrongCat(const WrongCat &cop){
    type = cop.type;
}

WrongCat& WrongCat::operator=(const WrongCat &cop){
    type = cop.type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout<<"WrongCat destructor called\n";
}

std::string WrongCat::getType()const{
    return (type);
}
void WrongCat::makeSound() const{
    std::cout<<"WOOOOOO!!\n";
}