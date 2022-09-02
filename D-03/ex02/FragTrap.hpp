/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:14:49 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/28 17:45:09 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
     public:
    FragTrap();
    FragTrap(const std::string &n);
    FragTrap(const FragTrap&);
    FragTrap& operator=(const FragTrap&);
    ~FragTrap();
    void highFivesGuys(void);
};