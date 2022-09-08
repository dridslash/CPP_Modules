/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:05:22 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 09:45:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    public:
    Intern();
    ~Intern();
    Form* makeForm(std::string form_name, std::string target);
    Form* return_shrub_form(std::string form_name, std::string &target);
    Form* return_robot_form(std::string form_name, std::string &target);
    Form* return_pres_form(std::string form_name, std::string &target);
    Form* form_not_found(std::string form_name, std::string &target);
};

#endif