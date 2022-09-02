/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:37:40 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/29 16:06:19 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
    std::string name;
    int Hitpoints;
    int EnergyPoints;
    int AttackDamage;
    
    public:
    ClapTrap();
    ClapTrap(const std::string &n);
    ClapTrap(const ClapTrap&);
    ClapTrap& operator=(const ClapTrap&);
    ~ClapTrap();
    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string Get_name()const;
    int Get_Hitpoints()const;
    int Get_EnergyPoints()const;
    int Get_AttackDamage()const;
    void Set_name(const std::string &n);
};

#endif