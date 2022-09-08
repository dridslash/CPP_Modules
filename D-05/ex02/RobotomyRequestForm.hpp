/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:01:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 18:26:47 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form{
    public:
    std::string target;
    RobotomyRequestForm();
    RobotomyRequestForm(std::string t);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
    void call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor);
    std::string get_target();
};

#endif