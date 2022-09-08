/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:22:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 18:44:49 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    std::cout<<"PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t):Form("PresidentialPardonForm",25,5){
    target = t;
    std::cout << "PresidentialPardonForm paramitirezied constrcutor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout<<"PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cop){
    target = cop.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& cop){
    target = cop.target;
    return (*this);
}

void PresidentialPardonForm::call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor){
    if (execute(executor)){
    if ((*this).getGrade_signed() >= 5 && (*this).getGrade_execute() <= 25)
    std::cout<<target<< " has been Pardoned By Zaphod Beeblebrox\n";
    }
}

std::string PresidentialPardonForm::get_target(){
    return (target);
}