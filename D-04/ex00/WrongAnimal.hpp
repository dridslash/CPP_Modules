/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:30:03 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 11:22:56 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
    std::string type;
    public :
    WrongAnimal();
    WrongAnimal(const std::string &n);
    WrongAnimal(const WrongAnimal&);
    WrongAnimal& operator=(const WrongAnimal&);
    virtual ~WrongAnimal();
    virtual std::string getType()const;
    virtual void makeSound() const;
};

#endif