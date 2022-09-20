/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:15:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 15:55:02 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class MyException : public std::exception{
  public:
  std::string excep_msg;
  int excep_int;
  MyException(){
    excep_int = 0;
  }
  MyException(const std::string &st , int ex_int){
    excep_msg = st;
    excep_int = ex_int;
  }

  MyException(const std::string &st){
    excep_msg = st;
  }
  
  ~MyException() throw(){}
  
   const char * what() const throw(){
    return (excep_msg.c_str());
  }
};

class a{};
class b : public a{};

void handl_excep(int i){
    try{
        if (i < 0)
        throw MyException("enter a positive number",i);
    }catch(MyException es){
        std::cout<<es.excep_msg<< " " << es.excep_int<<"\n";
    }
}

void handl_excep2(int i)/*throw(int)*/{
    try{
        //if (i)
        throw i;
        // else
        // throw "your value is 0";
    }catch(int i){
      std::cout<<"i catched the first -->"<<i<<"\n";
        throw;
    }
}

void costum_handler(){
  std::cout<<"used a costume handler\n";
}

void handl_excep3(int i)/*throw(int)*/{
    try{
        if (i)
        throw i;
        // else
        // throw "your value is 0";
    }catch(int i){
      std::cout<<"i catched the second -->"<<i<<"\n";
        //throw;
    }
}

int p(){std::cout<<"s\n";return 10;}

int main(){
    // std::cout<<"Start\n";
    // int(*p1)(void) = p;
    // int MyException::*h = &MyException::excep_int;
    // p1();
    // MyException i;
    // // i.*h = 100;
    // // std::cout<<i.*h<<"\n";
    // // b der;
    // try{
    //     handl_excep2(10);
    // }catch(int j){
    //   //std::cout<<j<<" "<<"catched\n";
    //   handl_excep3(j);
    // }
    // try{
    //     // std::string d = 10;
    // handl_excep(-1);
    // }catch(MyException e){
    //     std::cout<<e.excep_msg<<" "<<e.excep_int<<"\n";
    // }
    // try{
    // handl_excep(-1);
    // }catch(MyException e){
    //     std::cout<<e.excep_msg<< " " << e.excep_int<<"\n";
    // }
    //handl_excep(-5);
    std::set_terminate(costum_handler);
    try{
        std::string l = "hello to";
        int *p = new int(20);
        std::cout<<*p<<"\n";
        delete p;
        std::cout<<"im inside try block\n";
        throw 20;
        std::cout<<"im i working??\n";
    }catch(int p){
        //system("leaks a.out");   
        std::cout<<"i caught >> "<<p<<"\n";
    }catch(std::exception &e){
        //std::cout<<"im the exception of the string --->"<<l<<"\n";
        //std::cout<<"continue\n";
        std::cout<<"--->"<<e.what()<<"\n";
    }
    std::cout<<"End\n";
}