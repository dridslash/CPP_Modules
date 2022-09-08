/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:36:43 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 13:50:50 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Bureaucrat::Grade : public std::exception{
    private:
    std::string _excep_msg_error;
    
    public:
    Grade();
    Grade(std::string excep_error);
    ~Grade()throw();
    const char *what()const throw();
};


Bureaucrat::Grade::Grade(){}

Bureaucrat::Grade::Grade(std::string excep_error){
    _excep_msg_error = excep_error;
}

Bureaucrat::Grade::~Grade()throw(){}
    
const char * Bureaucrat::Grade::what()const throw(){
    return (_excep_msg_error.c_str());
}

Bureaucrat::Bureaucrat(){std::cout<<"Bureaucrat default constructor called\n";}

Bureaucrat::Bureaucrat(const char *n, int g){
    _name = n;
    if (g < 1)
        throw Grade("GRADE TOO HIGH");
    else if ( g > 150)
        throw Grade("GRADE TO LOW");
    else
    _grade  = g;
    std::cout<<"Bureaucrat parametarized constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& cop){
    _name = new char();
    _name = cop._name;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& cop){
    _name = new char();
    _name = cop._name;
    return (*this);
}

Bureaucrat::~Bureaucrat(){std::cout<<"Bureaucrat destructor called\n";}


std::string Bureaucrat::getName()const{
    return (_name);
}

int Bureaucrat::getGrade()const{
    return (_grade);
}

void Bureaucrat::incrementGrade(){
    _grade--;
    if ((_grade--) < 1)
        throw Grade("GRADE TOO HIGH");
}

void Bureaucrat::decrementGrade(){
    _grade++;
    if ((_grade++) > 150)
        throw Grade("GRADE TOO LOW");
}

void Bureaucrat::signForm(Form &f){
    if(f.get_is_signed())
    std::cout<<_name << " signed " << f.getName() << "\n";
    else{
    std::cout<<_name << " couldnt't sign " << f.getName() << " because " << (*this).reason << "\n";
    }
}

void Bureaucrat::executeFrom(Form const &form){
    if (form.execute((*this))){
        std::cout<<_name << " executed " << form.getName() << "\n";
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& ob){
    os << ob.getName() << ", Bureaucrat grade " << ob.getGrade() << "\n";
    return os;
}