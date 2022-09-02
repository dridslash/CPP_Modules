/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:06:44 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/16 13:47:20 by mnaqqad          ###   ########.fr       */
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
    Fixed();
    Fixed(const Fixed &);
    Fixed&operator=(const Fixed&);
    ~Fixed();
    int getRawBits(void)const;
    void setRawBits(int const raw);
};

#endif

