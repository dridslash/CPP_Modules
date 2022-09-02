/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:36:36 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 13:47:01 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
    Brain *br;
    public :
    Cat();
    Cat(const std::string &n);
    Cat(const Cat& cop);
    Cat& operator=(const Cat&);
    ~Cat();
    void makeSound()const;
    Brain* Get_Brain()const;
    std::string getType()const;
};

#endif