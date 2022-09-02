/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:59:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/01 08:32:24 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
 const Animal* meta = new Animal();
 const Animal* j = new Dog();
 const Animal* i = new Cat();
 std::cout << "-------->" << j->getType()<<std::endl;
 std::cout << "-------->" << i->getType()<<std::endl;
 i->makeSound(); //will output the cat sound!
 j->makeSound(); //will output the dog sound!
 meta->makeSound();
 delete j;
 delete i;
return 0;
}