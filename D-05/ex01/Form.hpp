/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:55:35 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 13:43:59 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

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
    ~Form();
    std::string getName()const;
    int getGrade_signed()const;
    int getGrade_execute()const;
    bool get_is_signed()const;
    void beSigned(Bureaucrat &b);
    class Grade;
    
};

std::ostream& operator<<(std::ostream&, Form&);

#endif