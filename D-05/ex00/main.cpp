/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:27:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/08 10:03:17 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

int main(){
    try{
        Bureacrat b("Hermes Conrad",36);
        b.decrementGrade();
        std::cout<<b;
    }catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
}