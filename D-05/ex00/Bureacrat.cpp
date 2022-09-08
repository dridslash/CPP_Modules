/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:36:43 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 12:39:38 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

class Bureacrat::Grade : public std::exception{
    private:
    std::string _excep_msg_error;
    
    public:
    Grade();
    Grade(std::string excep_error);
    ~Grade()throw();
    const char *what()const throw();
};

Bureacrat::Grade::Grade(){}

Bureacrat::Grade::Grade(std::string excep_error){
    _excep_msg_error = excep_error;
}

Bureacrat::Grade::~Grade()throw(){}
    
const char * Bureacrat::Grade::what()const throw(){
    return (_excep_msg_error.c_str());
}

Bureacrat::Bureacrat(){std::cout<<"Bureacrat default constructor called\n";}

Bureacrat::Bureacrat(const char *n, int g){
    _name = n;
    if (g < 1)
        throw Bureacrat::Grade("GRADE TOO HIGH");
    else if ( g > 150)
        throw Bureacrat::Grade("GRADE TO LOW");
    else
    _grade  = g;
    std::cout<<"Bureacrat parametarized constructor called\n";
}

Bureacrat::Bureacrat(const Bureacrat& cop){
    _name = new char();
    _name = cop._name;
}

Bureacrat& Bureacrat::operator=(const Bureacrat& cop){
    _name = new char();
    _name = cop._name;
    return (*this);
}

Bureacrat::~Bureacrat(){std::cout<<"Bureacrat destructor called\n";}


std::string Bureacrat::getName()const{
    return (_name);
}

int Bureacrat::getGrade()const{
    return (_grade);
}

void Bureacrat::incrementGrade(){
    _grade--;
    if ((_grade--) < 1)
        throw Bureacrat::Grade("GRADE TOO HIGH");
}

void Bureacrat::decrementGrade(){
    _grade++;
    if ((_grade++) > 150)
        throw Bureacrat::Grade("GRADE TOO LOW");
}

std::ostream& operator<<(std::ostream& os, Bureacrat& ob){
    os << ob.getName() << ", bureaucrat grade " << ob.getGrade() << "\n";
    return os;
}