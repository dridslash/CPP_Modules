/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:46:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 18:06:55 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main(){
    
   IMateriaSource* src = new MateriaSource();
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());
   
   ICharacter* me = new Character("me");
   AMateria* tmp;
   tmp = src->createMateria("ice");
   me->equip(tmp);
   tmp = src->createMateria("cure");
   me->equip(tmp);
   tmp = src->createMateria("fire");
   me->equip(tmp);
   tmp = src->createMateria("ice");
   me->equip(tmp);
   // tmp = src->createMateria("fire");
   // me->equip(tmp);
   tmp = src->createMateria("ice");
   me->equip(tmp);
   // tmp = src->createMateria("ikhalil");
   // me->equip(tmp);
   tmp = src->createMateria("cure");
   me->equip(tmp);
   me->unequip(3);
   
   ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    
   delete me;
   delete bob;
   delete src;
}