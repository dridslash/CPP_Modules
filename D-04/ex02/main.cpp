/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:06:28 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 15:08:09 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){
 //const Animal* meta = new Animal();
 const Animal* j = new Dog();
 const Animal* i = new Cat();
 std::cout << "-------->" << j->getType()<<std::endl;
 std::cout << "-------->" << i->getType()<<std::endl;
 i->makeSound(); //will output the cat sound!
 j->makeSound(); //will output the dog sound!
//  meta->makeSound();
 delete j;
 delete i;
return 0;
}