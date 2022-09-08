/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:23:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 13:42:46 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
    const char *_name;
    int _grade;
    
    public:
    std::string reason;
    Bureaucrat();
    Bureaucrat(const char * name, int grade);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat();
    std::string getName()const;
    int getGrade()const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form&);
    class Grade;
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif