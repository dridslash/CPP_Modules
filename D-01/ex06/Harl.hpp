/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:42:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 11:37:01 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>

class Harl{
    public:
    void debug (void);
    void info (void);
    void warning (void);
    void error (void);

    public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif