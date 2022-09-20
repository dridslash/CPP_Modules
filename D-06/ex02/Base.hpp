/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:42:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/11 08:58:29 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>

class Base{
    public:
    Base();
    virtual ~Base();
    virtual void Im();
};

Base* generate(void);
void identify(Base *p);
void identify(Base &p);

#endif