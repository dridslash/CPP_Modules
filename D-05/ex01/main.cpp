/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:27:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/07 13:48:35 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    try{
        Form f("form1",100,1);
        Bureaucrat b("Hermes Conrad",150);
        std::cout<<"---------------------------\n";
        std::cout << b;
        std::cout << f;
        std::cout<<"---------------------------\n";
        std::cout<<"/////////////\n";
        f.beSigned(b);
        b.signForm(f);
        std::cout<<"-----------SIGNING---------\n";
    }catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
}