/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:03:46 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 13:47:40 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Form::Grade : public std::exception{
    private:
    std::string _excep_msg_error;
    
    public:
    Grade();
    Grade(std::string excep_error);
    ~Grade()throw();
    const char *what()const throw();
};


Form::Grade::Grade(){}

Form::Grade::Grade(std::string excep_error){
    _excep_msg_error = excep_error;
}

Form::Grade::~Grade()throw(){}
    
const char * Form::Grade::what()const throw(){
    return (_excep_msg_error.c_str());
}

Form::Form():_is_signed(false) , _grade_for_sign(0), _grade_for_execute(0){
    std::cout<<"From constructor called\n";
}

Form::Form(const char *n, int grade_si, int grade_exec):_is_signed(false) , _grade_for_sign(grade_si), _grade_for_execute(grade_exec){
    _name = n;
    if (grade_si < 1)
        throw Form::Grade("GRADE FOR SIGNING IS TOO HIGH");
    else if (grade_si > 150)
        throw Form::Grade("GRADE FOR SIGNING IS TOO LOW");
    else
    if (grade_exec < 1)
        throw Form::Grade("GRADE FOR EXECUTION IS TOO HIGH");
    else if (grade_exec > 150)
        throw Form::Grade("GRADE FOR EXECUTION IS TOO LOW");
    std::cout<<"From parametirized constructor called\n";
    
}

Form::~Form(){std::cout<<"From desstructor called\n";}

std::string Form::getName()const{
    return (_name);
}

int Form::getGrade_signed()const{
    return (_grade_for_sign);
}

int Form::getGrade_execute()const{
    return (_grade_for_execute);
}
    
bool Form::get_is_signed()const{
    return (_is_signed);
}

std::ostream& operator<<(std::ostream &os, Form &ob){
    os << "Form name: " << ob.getName() << " -- Grade for signing: " << ob.getGrade_signed() << " -- Grade for execute: " << ob.getGrade_execute() << "\n";
    return os;
}

void Form::beSigned(Bureaucrat &b){
    if (b.getGrade() > 150){
        throw Form::Grade("GRADE IS TOO LOW");
    }
    if ((b.getGrade() == _grade_for_sign && b.getGrade() > 0) || (b.getGrade() < _grade_for_sign && b.getGrade() > 0)){
        _is_signed = true;
    }
    else{
    b.reason = "not enough grade level";
    _is_signed = false;
    }
}