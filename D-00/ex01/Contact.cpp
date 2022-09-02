/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:40:45 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 10:13:20 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string fm, std::string lsm, std::string nck, std::string pnb, std::string drk) : _first_name(fm),
     _last_name(lsm), _nickname(nck), _phone_number(pnb), _darkest_secret(drk){}

std::string Contact::Get_first_name() const{
    return (this->_first_name);
}

std::string Contact::Get_last_name() const{
    return (this->_last_name);
}

std::string Contact::Get_nickname() const{
    return (this->_nickname);
}

std::string Contact::Get_phone_number() const{
    return (this->_phone_number); 
}

std::string Contact::Get_darkest_secret() const{
    return (this->_darkest_secret);
}

void Contact::Set_first_name(std::string fr_name){
    _first_name = fr_name;
}

void Contact::Set_last_name(std::string ls_name){
    _last_name = ls_name;
}

void Contact::Set_nickname(std::string ni_name){
    _nickname = ni_name;
}

void Contact::Set_phone_number(std::string phone_nb){
    _phone_number = phone_nb;
}

void Contact::Set_darkest_secret(std::string dr_sr){
    _darkest_secret = dr_sr;
}