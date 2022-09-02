/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:57:39 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/31 12:04:47 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
  public :
    WrongCat();
    WrongCat(const std::string &n);
    WrongCat(const WrongCat&);
    WrongCat& operator=(const WrongCat&);
    ~WrongCat();
    std::string getType()const;
    void makeSound() const;
};

#endif