/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:12:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/18 09:20:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int  Fixed::scale = 8;

//---------------CONTRUCTORS---------------------------

Fixed::Fixed():_fi(0) , hold_fixed(0){}

Fixed::Fixed(const Fixed &cop):_fi(cop._fi),hold_fixed(cop.hold_fixed){}

Fixed::~Fixed(){
}

Fixed::Fixed(const int i){
    _fi = i << scale;
    hold_fixed = toFloat();
}

Fixed::Fixed(const float nf){
    _fi = (int)roundf((nf * (float)(1<<scale)));
    hold_fixed = toFloat();
}

//---------------MEMBER_FUCNTIONS-------------------------

Fixed& Fixed::operator=(const Fixed &p){
    _fi = p._fi;
    hold_fixed = p.hold_fixed;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &ob){
    os << ob.hold_fixed;
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

//----------------Overloaded_Operators_Memeber_Fucntions--------------

bool operator==(const Fixed &ob1, const Fixed &ob2){
    return (ob1.hold_fixed == ob2.hold_fixed);
}

bool operator!=(const Fixed &ob1, const Fixed &ob2){
    return !(ob1.hold_fixed == ob2.hold_fixed);
}

bool operator<(const Fixed &ob1, const Fixed &ob2){
    return (ob1.hold_fixed < ob2.hold_fixed);
}

bool operator>(const Fixed &ob1,const Fixed &ob2){
    return (ob1.hold_fixed > ob2.hold_fixed);
}

bool operator<=(const Fixed &ob1, const Fixed &ob2){
    return (ob1.hold_fixed <= ob2.hold_fixed);
}

bool operator>=(const Fixed &ob1,const Fixed &ob2){
    return (ob1.hold_fixed >= ob2.hold_fixed);
}

Fixed operator+(const Fixed &ob1,const Fixed &ob2){
    Fixed sum = ob1;
    sum.setRawBits(ob1.getRawBits() + ob2.getRawBits());
    sum.hold_fixed = sum.toFloat();
    return (sum);
}

Fixed operator-(const Fixed &ob1,const Fixed &ob2){
    Fixed sum = ob1;
    sum.setRawBits(ob1.getRawBits() - ob2.getRawBits());
    sum.hold_fixed = sum.toFloat();
    return (sum);
}

Fixed& Fixed::operator++(){
    ++_fi;
    hold_fixed = toFloat();
    return (*this);
}

Fixed& Fixed::operator--(){
    --_fi;
    hold_fixed = toFloat();
    return (*this);
}

Fixed Fixed::operator++(int){
   Fixed ret = (*this)._fi;
    ret.hold_fixed = toFloat();
    ++(this)->_fi;
    (*this).hold_fixed = toFloat();
    return (ret.hold_fixed);
}

Fixed Fixed::operator--(int){
    Fixed ret = (*this)._fi;
    ret.hold_fixed = toFloat();
    --(*this)._fi;
    (*this).hold_fixed = toFloat();
    return (ret.hold_fixed);
}

Fixed operator*(const Fixed &ob1 , const Fixed &ob2){
    Fixed mul1 = ob1;
    Fixed mul2 = ob2;
    Fixed result;
    result.setRawBits(((mul1.getRawBits())) * ((mul2.getRawBits())) >> result.getScale());
    result.hold_fixed = result.toFloat();
    return (result);
}

Fixed operator/(const Fixed &ob1, const Fixed &ob2){
    Fixed div1 = ob1;
    Fixed div2 = ob2;
    Fixed result;
    result.setRawBits((div1.getRawBits() << result.getScale()) / (div2.getRawBits()));
    result.hold_fixed = result.toFloat();
    return (result);
}

Fixed& Fixed::min(Fixed& ob1, Fixed& ob2){
    if (ob1 > ob2)
        return (ob2);
    return (ob1);
}

const Fixed& Fixed::min(const Fixed& ob1, const Fixed& ob2){
    if (ob1 > ob2)
        return (ob2);
    return (ob1);
}

Fixed& Fixed::max(Fixed& ob1, Fixed& ob2){
    if (ob1 > ob2)
        return (ob1);
    return (ob2);
}

const Fixed& Fixed::max(const Fixed& ob1, const Fixed& ob2){
     if (ob1 > ob2)
        return (ob1);
    return (ob2);;
}