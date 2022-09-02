/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:57:29 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 09:18:33 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public :
    Dog();
    Dog(const std::string &n);
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    ~Dog();
    void makeSound()const;
    std::string getType()const;
};

#endif