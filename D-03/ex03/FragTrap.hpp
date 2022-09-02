/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:14:49 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/29 09:20:27 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public virtual  ClapTrap{
     public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif