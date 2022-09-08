/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:27:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 09:50:46 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    try{
        Intern  someRandomIntern;
        Form*   rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        std::cout<<"target name ----> "<<rrf->get_target()<<"\n";
        delete rrf;
    }catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
}