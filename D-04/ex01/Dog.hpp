/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:57:29 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 13:46:23 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
    Brain *br;
    public :
    Dog();
    Dog(const std::string &n);
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    ~Dog();
    void makeSound()const;
    Brain* Get_Brain()const;
    std::string getType()const;
};

#endif