/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:55:35 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 18:37:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <exception>

class Bureaucrat;

class Form{
    private:
    const char *_name;
    bool _is_signed;
    const int _grade_for_sign;
    const int _grade_for_execute;

    public:
    Form();
    Form(const char *n,const int grade_si, const int grade_exec);
    Form(const Form&);
    Form&operator=(const Form&);
    virtual ~Form();
    std::string getName()const;
    int getGrade_signed()const;
    int getGrade_execute()const;
    bool get_is_signed()const;
    void Set_is_signed(bool is_signed);
    virtual std::string get_target() = 0;
    bool execute(Bureaucrat const & executor)const;
    virtual void call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor) = 0;
    void beSigned(Bureaucrat &b);
    class Grade;
    
};

std::ostream& operator<<(std::ostream&, Form&);

#endif