/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:13:33 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 18:55:26 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():target(NULL){
    std::cout<<"RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t):Form("RobotomyRequestForm",72,45){
    target = t;
    std::cout << "RobotomyRequestForm paramitirezied constrcutor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout<<"RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cop){
    target = cop.target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& cop){
    target = cop.target;
    return (*this);
}

void RobotomyRequestForm::call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor){
    if (execute(executor)){
    if ((*this).getGrade_execute() <= 72 && (*this).getGrade_execute() >= 45)
    std::cout<<target<< " has been robotomized successfully 50% of the time\n";
    else
    std::cout<<"robotomy has failed!!\n";
    }
}

std::string RobotomyRequestForm::get_target(){
    return (target);
}