/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:27:48 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 09:54:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    std::cout<<"Shrubbery constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t):Form("ShrubberyCreationForm",145,137){
    target = t;
    std::cout << "Shrubbery paramitirezied constrcutor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout<<"Shrubbery destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cop){
    target = cop.target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cop){
    target = cop.target;
    return (*this);
}

void ShrubberyCreationForm::call_Yggdrasil_rbotomy_pardon(Bureaucrat const & executor){
    if (execute(executor)){
    if (getGrade_signed() >= 137 && getGrade_execute() <= 145){
    std::ofstream of;
    of.open(get_target() + "_shrubbery");
    if (!of)
    std::cout<<"failed to create a file\n";
       std::string tree = "\
                              'b      *\n\
                               '$    #.\n\
                                $:   #:\n\
                                *#  @):\n\
                                :@,@):   ,.**:'\n\
                      ,         :@@*: ..**'\n\
                       '#o.    .:(@'.@*'\n\
                          bq,..:,@@*'   ',''*'\n\
                          ',p$q8,:@)'  '.p*'\n\
                         '    ''@@Pp@@*'\n\
                               Y7'.'\n\
                              :@):.\n\
                             .:@:'.\n\
                           .::(@:.\n";
    of << tree << std::endl;
    of.close();
    }
    }
}

std::string ShrubberyCreationForm::get_target(){
    return (target);
}