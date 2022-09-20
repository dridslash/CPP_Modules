/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:43:37 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/11 09:31:52 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){/*std::cout<<"base constructor called\n";*/}
Base::~Base(){/*std::cout<<"base destructor called\n";*/}

Base* generate(void){
    int g_classes;
  srand (time(0));

  g_classes = (rand() + 20) % 3;

  if (g_classes == 0){
    return (new A());
  }
  else if (g_classes == 1){
    return (new B());
  }
  else if (g_classes == 2){
    return (new C());
  }
  // std::cout<<"nb-->"<<g_classes<<"\n";
  return 0;
}

void identify(Base *p){
  
  if (dynamic_cast<Base*>(p)){
    std::cout<<"------It is a Base type-----\n";
  }
  if (dynamic_cast<A*>(p)){
    std::cout<<"------It is an A type-------\n";
  }
  if (dynamic_cast<B*>(p)){
    std::cout<<"------It is an B type-------\n";
  }
  if (dynamic_cast<C*>(p)){
    std::cout<<"------It is a C type-------\n";
  }
}

void identify(Base &p){
  try{
    Base base_type = dynamic_cast<Base&>(p);
    std::cout<<"------it is a Base type-----\n";
  }
  catch(...){
    //std::cout<<"Not a Base type\n";
  }

  try{
    A a_type = dynamic_cast<A&>(p);
    std::cout<<"------it is an A type-----\n";
  }
  catch(...){
    //std::cout<<"-->Not an A type\n";
  }

  try{
    B a_type = dynamic_cast<B&>(p);
    std::cout<<"------it is an B type-----\n";
  }
  catch(...){
    //std::cout<<"-->Not a B type\n";
  }

  try{
    C a_type = dynamic_cast<C&>(p);
    std::cout<<"------it is a C type-----\n";
  }
  catch(...){
    //std::cout<<"-->Not a C type\n";
  }
}

void Base::Im(){}