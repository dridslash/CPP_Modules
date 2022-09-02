/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:12:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/21 09:59:15 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int  Fixed::scale = 8;

Fixed::Fixed():_fi(0){
    std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &cop):_fi(cop._fi){
    std::cout<<"Copy constructor called\n";
}

Fixed::~Fixed(){
    std::cout<<"Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &p){
    _fi = p.getRawBits();
    std::cout<<"Copy assignment operator called\n";
    std::cout<<"getRawBits member function called\n";
    return (*this);
}

int Fixed::getRawBits(void)const{
    std::cout<<"getRawBits member function called\n";
    return (_fi);
}

void Fixed::setRawBits(int const raw){
    std::cout<<"setRawBits member function called\n";
    _fi = raw;
}