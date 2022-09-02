/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:30:25 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 16:04:52 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>


class AMateria{
    protected:
    std::string type;
    public:
    AMateria();
    AMateria(std::string const &ty);
    virtual ~AMateria();
    std::string const & getType()const;
    void Set_type(const std::string &tp);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif