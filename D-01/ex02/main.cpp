/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:18:02 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/10 08:26:17 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string br = "HI THIS IS BRAIN";
    std::string *stringPTR = &br;
    std::string &stringREF = br;

    std::cout<<"The memory address of the string variable: "<<&br<<std::endl;
    std::cout<<"The memory address held by stringPTR: "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF: "<<&stringREF<<std::endl;
    std::cout<<"----------------------------------------------------------------------\n";
    std::cout<<"The value of the string variable: "<<br<<std::endl;
    std::cout<<"The value pointed to by stringPTR: "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF: "<<stringREF<<std::endl;
}