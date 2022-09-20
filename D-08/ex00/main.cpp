/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:09:57 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/17 16:25:42 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SEARCH_NUMBER 200

int main(){
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(1);
    if (easyfind(vec,SEARCH_NUMBER) == -1)
        std::cout<<SEARCH_NUMBER<<" Number not found!!\n";
}