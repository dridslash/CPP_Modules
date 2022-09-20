/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:03:50 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/29 18:27:18 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p.hpp"

class child : public base{
  public:
    static int used;
    child(){std::cout<<"child class constructor\n";}
    child(const std::string &p,int number):base(p,number){}
    std::string print_name_number();
    ~child(){std::cout<<"destructor of child\n";}
  int get_id()const{return id;}
};
std::string child::print_name_number(){
  std::cout << name << number <<"heello2\n" << id<<"\n";
  return ("p");
}

int child::used = 100;

int main(){
  base *b,k;
  std::string p = "hello";
  child ch("he",20);
  b = &ch;
  b->print_name_number();
  // base &k = ch;
    // b.name = "hello";
    //b.print_name_number();
    ch.name = "hello";
    ch.print_name_number();
    std::cout<<child::used<<"\n";
    // std::cout<<ch.get_id()<<"\n";
    // ch.print_private();
}