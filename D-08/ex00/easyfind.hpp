/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:10:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/17 16:24:06 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>int easyfind(const T& con, int numb){
    if (std::find(con.begin(),con.end(),numb) == con.end())
        return (-1); 
    else
        std::cout<<"Found --->" << numb << "\n";
    return (0);
}

#endif