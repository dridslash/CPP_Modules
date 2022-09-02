/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:48:46 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/07 10:17:59 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv){
    int it_1 = 0;
    (void)argc;
    std::string p;
    while(argv[++it_1])
        p += argv[it_1];
    std::string::size_type i;
    if (!p.empty()){   
    for(i = 0 ; i < p.size();i++)
        p[i] = toupper(p[i]);
    std::cout<<p<<std::endl;
    }
    else
    std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
}