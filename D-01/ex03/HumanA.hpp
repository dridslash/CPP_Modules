/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:47:28 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/10 10:28:02 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private:
    Weapon &wp;
    std::string name;

    public :
    HumanA(Weapon &w);
    HumanA(std::string n,Weapon &w);
    ~HumanA();
    void attack(void);
};

#endif