/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:08:12 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 09:50:30 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){std::cout<<"Intern constructor\n";}

Intern::~Intern(){std::cout<<"Intern destructor\n";}

Form* Intern::return_shrub_form(std::string form_name, std::string &target){
    std::cout<<"Intern creates "<<form_name<<"\n";
    return (new ShrubberyCreationForm(target));
}

Form* Intern::return_robot_form(std::string form_name, std::string &target){
    std::cout<<"Intern creates "<<form_name<<"\n";
    return (new RobotomyRequestForm(target));
}

Form* Intern::return_pres_form(std::string form_name, std::string &target){
    std::cout<<"Intern creates "<<form_name<<"\n";
    return (new PresidentialPardonForm(target));
}

Form* Intern::form_not_found(std::string form_name, std::string &target){
    std::cout<<"--- FORM NOT MATCHED ----\n";
    return (NULL);
}

Form* Intern::makeForm(std::string form_name, std::string target){
    std::string forms[3] = {"robotomy request","shrubbery request","Presidential request"};
    int index = 3;
   Form* (Intern::*func_forms[4])(std::string form_name, std::string &target) = {&Intern::return_robot_form, &Intern::return_shrub_form, &Intern::return_pres_form,&Intern::form_not_found};
    for(int i = 0; i < 3; i++)
        if ((forms[i].compare(form_name)) == 0){
            index = i;
            break;}
    return((this->*func_forms[index])(form_name, target));
}
