/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:27:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 10:07:02 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat b("Hermes Conrad",15);
        Form *f = new ShrubberyCreationForm ("home");
        std::cout<<"TRAGET----> "<<f->get_target()<<"\n";
        f->beSigned(b);
        f->execute(b);
        f->call_Yggdrasil_rbotomy_pardon(b);
        b.signForm(*f);
        b.executeFrom(*f);
        delete f;
    }catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
}