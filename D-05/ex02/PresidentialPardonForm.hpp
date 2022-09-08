/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:19:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 18:26:51 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
    public:
    std::string target;
    PresidentialPardonForm();
    PresidentialPardonForm(std::string t);
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
    void call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor);
    std::string get_target();
};

#endif