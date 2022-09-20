/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:45:52 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/05 15:45:58 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
   using namespace std;
   void divide(double a, double b);
int main() {
double i, j;
     do {
       cout << "Enter numerator (0 to stop): ";
       cin >> i;
       cout << "Enter denominator: ";
       cin >> j;
       divide(i, j);
     } while(i != 0);
return 0; }
   void divide(double a, double b)
   {
     try {
       if(!b) throw b; // check for divide-by-zero
       cout << "Result: " << a/b << endl;
     }
     catch (double b) {
       cout << "Can't divide by zero.\n";
   
 } }