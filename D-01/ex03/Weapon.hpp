/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:42:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/11 17:24:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>

class Weapon{
    private:
    std::string type;
    public :
    Weapon();
    Weapon(std::string t);
    ~Weapon();
    const std::string &getType() const;
    void setType(std::string t);
};

#endif