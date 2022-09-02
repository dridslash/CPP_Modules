/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:49:00 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/10 10:45:19 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private:
    Weapon *wp;
    std::string name;

    public :
    HumanB();
    HumanB(std::string n);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &w);
};

#endif