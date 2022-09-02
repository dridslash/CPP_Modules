/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:54:05 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 17:28:50 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int MateriaSource::idn = 0;

MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

void MateriaSource::learnMateria(AMateria* m){
    if (idn < 4){
    Materias[idn] = m;
    idn++;
    }
    else
    std::cout<<"Materias is full!!\n";
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for(int i = 0; i < 4; i++){
        if (Materias[i]->getType().compare(type) == 0){
            return Materias[i];
        }
    }
    return 0;
}