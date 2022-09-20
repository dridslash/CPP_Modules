/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:14:05 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/29 18:26:10 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class base{
  private:
  int lp;
  public:
  std::string name;
  int number;
  protected:
  int id;

  public:
  base():lp(200){std::cout<<"base constructor called\n";}
  base(const std::string &n, int nb):name(n),number(nb),lp(200){std::cout<<"patametirezd constructor called\n";}
  void print_private(){std::cout<<lp<<"\n";}
  public:
  virtual std::string print_name_number();
  virtual ~base(){std::cout<< "destructor for base called\n";}
};