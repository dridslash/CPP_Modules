/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:32:16 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 14:47:37 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
   public:
   AMateria *Materias[4];
   static int idn;
   MateriaSource();
   ~MateriaSource();
   void learnMateria(AMateria*);
   AMateria* createMateria(std::string const & type);
};

#endif