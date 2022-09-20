/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:55:32 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/14 17:09:41 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(){
    Data *d = new Data;
    d->a = 'a';
    d->b = 'b';
    d->c = 120;
    std::cout<<d->a<<std::endl;
    std::cout<<d->b<<std::endl;
    std::cout<<d->c<<std::endl;
    Data *comp = deserialize(serialize(d));
    if (d == comp){
        std::cout<<"euqal\n";
    }
}