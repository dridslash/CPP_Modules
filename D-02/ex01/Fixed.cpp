/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:12:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/21 09:09:50 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int  Fixed::scale = 8;

//---------------CONTRUCTORS---------------------------

Fixed::Fixed():_fi(0) , hold_fixed(0){
    std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &cop):_fi(cop._fi),hold_fixed(cop.hold_fixed){
    std::cout<<"Copy constructor called\n";
}

Fixed::~Fixed(){
    std::cout<<"Destructor called\n";
}

Fixed::Fixed(const int i){
    std::cout<<"Int constructor called\n";
    _fi = i << scale;
    hold_fixed = toFloat();
}

Fixed::Fixed(const float nf){
    std::cout<<"Float constructor called\n";
    _fi = (int)roundf((nf * (float)(1<<scale)));
    hold_fixed = toFloat();
}

//---------------MEMBER_FUCNTIONS-------------------------

Fixed& Fixed::operator=(const Fixed &p){
    _fi = p._fi;
    hold_fixed = p.hold_fixed;
    std::cout<<"Copy assignment operator called\n";
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &ob){
    os << ob.getFloatFixed();
    return os;
}


int Fixed::getRawBits(void)const{
    return (_fi);
}

void Fixed::setRawBits(int const raw){
    _fi = raw;
}

int Fixed::getScale(void){
    return (Fixed::scale);
}


float Fixed::toFloat(void)const{
    return ((float)(_fi) / (float)((1<<scale)));
}

int Fixed::toInt(void)const{
    return (_fi >> scale);
}

float Fixed::getFloatFixed()const{
    return (hold_fixed);
}

