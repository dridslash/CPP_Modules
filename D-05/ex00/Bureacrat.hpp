/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureacrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:23:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 12:39:12 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <exception>

class Bureacrat{
    private:
    const char *_name;
    int _grade;
    
    public:
    Bureacrat();
    Bureacrat(const char * name, int grade);
    Bureacrat(const Bureacrat&);
    Bureacrat& operator=(const Bureacrat&);
    ~Bureacrat();
    std::string getName()const;
    int getGrade()const;
    void incrementGrade();
    void decrementGrade();
    class Grade;
};

std::ostream& operator<<(std::ostream&, Bureacrat&);

#endif