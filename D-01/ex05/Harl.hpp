/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:42:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/12 11:37:04 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>

class Harl{
    private:
    void debug (void);
    void info (void);
    void warning (void);
    void error (void);

    public:
    void handl_non_level(void);
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif