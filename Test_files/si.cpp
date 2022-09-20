/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   si.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:48:37 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 08:36:45 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class t{
    public:
    int *vl;
    public:
    t(){
    vl = new int;
    }
    t(const t& cop){
        vl = new int;
        *vl = *(cop.vl);
    }
    t(int p){
        vl = new int;
        *vl = p;
    }
    ~t(){delete vl;}
};

int main(){
    // t ob(10);
    // t ob2 = ob;
    // *(ob.vl) = 15;
    // std::cout<<*(ob.vl)<<std::endl;
    // std::cout<<*(ob2.vl)<<std::endl;
    int const h = 10;
    h = 20;
}