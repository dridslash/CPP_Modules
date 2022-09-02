/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:36:36 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 09:18:35 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public :
    Cat();
    Cat(const std::string &n);
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat();
    void makeSound()const;
    std::string getType()const;
};

#endif