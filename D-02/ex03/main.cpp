/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:58:04 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/21 09:13:45 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(){
    Point a (1.0f,0.0f);
    Point b (3.0f,0.0f);
    Point c (0.0f,3.0f);
    Point point (2.0f,0.5f);
    if (bsp(a,b,c,point))
    std::cout << "point is inside\n";
    else
    std::cout << "point is outside\n";
}