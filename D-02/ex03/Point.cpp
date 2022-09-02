/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:09:02 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/18 18:11:59 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

void dqwd();
Point::Point(): _x(0), _y(0){}
Point::Point(const float x, const float y) : _x(x), _y(y){}
Point::Point(const Point &cop) : _x(cop._x) , _y(cop._y){}

Point& Point::operator=(const Point &cop){
    (void)cop;
    return (*this);
}

Point::~Point(){}

Fixed Point::get_x() const{
    return (_x);
}

Fixed Point::get_y() const{
    return (_y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed area_a_b_c (abs((a.get_x().hold_fixed) * (b.get_y().hold_fixed - c.get_y().hold_fixed) + (b.get_x().hold_fixed * (c.get_y().hold_fixed - a.get_y().hold_fixed)) + (c.get_x().hold_fixed * (a.get_y().hold_fixed - b.get_y().hold_fixed)))/2);
    Fixed area_p_a_b (abs((point.get_x().hold_fixed) * (a.get_y().hold_fixed - b.get_y().hold_fixed) + (a.get_x().hold_fixed * (b.get_y().hold_fixed - point.get_y().hold_fixed)) + (b.get_x().hold_fixed * (point.get_y().hold_fixed - a.get_y().hold_fixed)))/2);
    Fixed area_p_b_c (abs((point.get_x().hold_fixed) * (b.get_y().hold_fixed - c.get_y().hold_fixed) + (b.get_x().hold_fixed * (c.get_y().hold_fixed - point.get_y().hold_fixed)) + (c.get_x().hold_fixed * (point.get_y().hold_fixed - b.get_y().hold_fixed)))/2);
    Fixed area_p_a_c (abs((point.get_x().hold_fixed) * (a.get_y().hold_fixed - c.get_y().hold_fixed) + (a.get_x().hold_fixed * (c.get_y().hold_fixed - point.get_y().hold_fixed)) + (c.get_x().hold_fixed * (point.get_y().hold_fixed - a.get_y().hold_fixed)))/2);
    if ((area_p_a_b == 0.0f) || (area_p_b_c == 0.0f) || (area_p_a_c  == 0.0f))
        return (false);
    if (area_p_a_b + area_p_b_c + area_p_a_c == area_a_b_c)
    return (true);
    return (false);
}