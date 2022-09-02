/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:15:24 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 17:43:03 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap{
    private:
    std::string name;
    public:
    DiamondTrap();
    DiamondTrap(const std::string &n);
    DiamondTrap(const DiamondTrap&);
    DiamondTrap& operator=(const DiamondTrap&);
    ~DiamondTrap();
    public:
    void whoAmI();
};

#endif