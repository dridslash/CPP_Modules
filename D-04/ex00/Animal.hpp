/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:46:55 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 14:58:55 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal{
    protected:
    std::string type;
    public :
    Animal();
    Animal(const std::string &n);
    Animal(const Animal&);
    Animal& operator=(const Animal&);
    virtual ~Animal();
    virtual std::string getType()const;
    virtual void makeSound() const;
};

#endif