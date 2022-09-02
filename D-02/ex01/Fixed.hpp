/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:06:44 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/16 16:09:44 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
    int _fi;
    static const int scale;

    public:
    float hold_fixed;
    Fixed();
    Fixed(const Fixed &);
    Fixed(const int i);
    Fixed(const float nf);
    Fixed&operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void)const;
    float getFloatFixed(void)const;
    static int getScale(void);
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
    
};

std::ostream& operator<<(std::ostream& os, const Fixed &ob);

#endif

