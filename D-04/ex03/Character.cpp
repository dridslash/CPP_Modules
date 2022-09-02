/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:14:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 18:06:06 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::idn = 0;

Character::Character(){
}

Character::Character(const std::string &n):name(n){
}

Character::Character(const Character &cop){
    for(int i = 0; i < 4; i ++){
        delete slots[i];   
    }
    AMateria *slots[4];
    for(int i = 0; i < 4 ; i++){
        slots[i]->Set_type(cop.slots[i]->getType());
    }
}

Character& Character::operator=(const Character &cop){
    for(int i = 0; i < 4; i ++){
        delete slots[i];   
    }
    AMateria *slots[4];
    for(int i = 0; i < 4 ; i++){
       slots[i]->Set_type(cop.slots[i]->getType());
    }
    return (*this);
}

Character::~Character(){}

std::string const& Character::getName() const{
    return (name);
}

void Character::equip(AMateria* m){
    if (idn < 4 && m){
    slots[idn] = m;
     std::cout<<"\n"<<"---> "<<slots[idn]->getType()<<" equiped at slot "<< idn <<"\n";
    idn++;
    }
    else if (idn >= 4)
    std::cout<<"*🚫 inverntory is full!!\n";
    else
    std::cout<<"*🚫 element not found!!\n";
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4 && slots[idx]){
        std::cout<<"\n"<<"---> "<<slots[idx]->getType()<<" unequiped at slot " << idx << "\n";
        slots[idx] = 0;
        idn--;
    }
    else
    std::cout<<"*🚫 this Materia don't exit!!\n";
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < idn && slots[idx])
    slots[idx]->use(target);
    else
    std::cout<<"*⚠️  couldn't use anything!!\n";
}

void Character::getMateria_Name(int indx){
    if (indx <= idn - 1)
    std::cout<<slots[indx]->getType()<<"\n";
    else
    std::cout<<"out of range\n";
}