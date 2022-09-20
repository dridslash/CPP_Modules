/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:20:22 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 16:05:37 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <algorithm>
// #include <ostream>

class print{
   private:
   //std::ostream& os;
   char sp;
   public:
   int s;
   print(int n):s(n){
      s = n;
   }
   operator int() const {
      return s;
   }
   // print(std::ostream& o = std::cout , char sep = ' '):os(o),sp(sep){}
   // void operator()(const std::string &line){
   //    os<< line << sp;
   // }
};

int main(){

   // std::array<int,5> arr = {1,2,3,4,5};
   //print p(std::cout,'/');
  // p("hello");
  print p = 10;
  int l = p;
  std::cout<<l<<"\n";
   //  int arr[6] = {2,1,3,6,5,4};
   //  std::sort(arr,arr+6);
   //  //arr.fill(10);
   //  for(int i = 0; i < 6; i++)
   //   std::cout<<arr[i]<<"\n";

   //   int h = std::min(1,2);
   //   std::cout<<h;
   
}