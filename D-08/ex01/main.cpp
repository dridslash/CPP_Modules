/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:17:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/20 08:40:45 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define NUMBER_RANGE 5

int main(){
try{
Span sp = Span(NUMBER_RANGE);
//sp.addNumbers(NUMBER_RANGE);
sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
    for(int i = 0; i < 5;i++)
   std::cout<<sp.vec[i]<<"\n";
  
  std::cout<<"-------------------------------"<<"\n";
  
    std::cout <<sp.shortestSpan()<<"\n";
   std::cout <<sp.longestSpan()<<"\n";
  std::cout<<"------------------------SECOND_TEST------------------\n";
//   std::vector<int> vec(NUMBER_RANGE);
//   std::vector<int>::iterator it1 = vec.begin();
//   std::vector<int>::iterator it2 = vec.end();
//   sp.addNumbers(it1,it2);
//   for(int i = 0; i < NUMBER_RANGE;i++)
//    std::cout<<sp.vec[i]<<"\n";
//  std::cout<<"-------------------------------"<<"\n";
//     std::cout <<sp.shortestSpan()<<"\n";
//    std::cout <<sp.longestSpan()<<"\n";
}catch(std::exception& e){
    std::cout<<e.what()<<std::endl;
}
}