/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:53:04 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/02 12:44:08 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main(){
    Animal* d = new Dog();
    Animal* c = new Cat();
    Animal *an[10];
    for (int i = 0 ; i < 10 ; i++){
        if (i < 5)
        an[i] = new Dog();
        else
        an[i] = new Cat();
    }
    // Dog d;
    // {
    // d.Get_Brain()->Set_ideas("dog");
    // std::cout<<"----->"<<d.Get_Brain()->Get_idea()<<"\n";
    // Dog tmp = d;
    // d.Get_Brain()->Set_ideas("dqwdq");
    // std::cout<<"----->"<<d.Get_Brain()->Get_idea()<<"\n";
    // std::cout<<"----->"<<tmp.Get_Brain()->Get_idea()<<"\n";
    // }
    // for(int i = 0; i < 10;i++){
    //     delete an[i];
    // }
    delete d;
    delete c;
return 0;
}