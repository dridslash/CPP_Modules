/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:49:55 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 10:26:58 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } private: int _n;
}; std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();
return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

// template<typename T>void print(T element){
//     std::cout<<element<<std::endl;
// }

int main(){

    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    // std::string tab[2]={"hello","pwd"};
    iter(tab,5,print);
    iter(tab2,5,print);
}