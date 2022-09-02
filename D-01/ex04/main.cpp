/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:57:39 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/11 15:58:13 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc , char **argv){
  if (argc != 4){
    std::cout<<"wrong number of arguments\n";
  }
  else{
  std::string f = argv[1];
  std::stringstream ss;
  std::ifstream in(f);
  std::ofstream of;
  if(!(in.fail())){
    of.open(f + ".replace");
    if (!of)
    std::cout<<"failed to create a file\n";
  if (in){
    ss<<in.rdbuf();
  }
  std::string string1= argv[2];
  std::string string2 = argv[3];
  std::string cop = ss.str();
  std::string::size_type start = 0;
  std::string::size_type end  = cop.length();
  while((end = cop.find(string1,start)) != std::string::npos){
    of << cop.substr(start, end - start) << string2;
    start = end + string1.length();
  }
  of << cop.substr(start, end - start);
  of.close();
  in.close();
  }
  else
  std::cout<<"failed to open a your file\n";
  }
  
}