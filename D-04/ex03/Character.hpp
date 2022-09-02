/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:05:31 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 16:04:28 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter{
    public:
    AMateria *slots[4];
    std::string name;
    static int idn;
    public:
    Character();
    Character(const std::string &n);
    Character(const Character &);
    Character&operator=(const Character &);
    ~Character();
    std::string const & getName() const;
    void getMateria_Name(int indx);
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif