/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:01:01 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/18 15:39:28 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
    const Fixed _x;
    const Fixed _y;

    public:
    Point();
    Point(const float x, const float y);
    Point(const Point &);
    Point& operator=(const Point &);
    ~Point();
    Fixed get_x() const;
    Fixed get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif