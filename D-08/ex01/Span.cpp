/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:17:52 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/20 08:39:48 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int Span::it = 0; 

Span::Span():N(0){
    vec.reserve(0);
    std::cout<<"default constructor called\n";
}

Span::Span(unsigned int n):N(n){
    vec.reserve(N);
    std::cout<<"param constructor called\n";
}

Span::Span(const Span &cop){
    vec = cop.vec;
}

Span& Span::operator=(const Span &cop){
    vec = cop.vec;
    return (*this);
}

Span::~Span(){
    std::cout<<"destructor called\n";
}

int Span::shortestSpan(){
    unsigned int short_span = 0;
    unsigned int hold_span = 0;
    unsigned int i = 0;
    unsigned int  j = 0;

    if ((N == 0 || N == 1) || it == 1){
        throw std::runtime_error("this opertion is not allowed check you Span");
    }
    std::sort(vec.begin(), vec.end());
    while (i < N - 1){
        j = abs(vec[i] - vec[i + 1]);
        short_span = std::min(j,hold_span);
        hold_span = j;
        i++;
    }
   return (short_span);
}

int Span::longestSpan(){
    //std::cout<<it<<"\n";
    if ((N == 0 || N == 1) || it == 1){
        throw std::runtime_error("this opertion is not allowed check you Span");
    }
    
    std::sort(vec.begin(), vec.end(),std::greater<int>());
    int longestSpan =  abs(vec[0] - vec[N - 1]);
    
    return (longestSpan);
}

void Span::addNumber(int number){
    if (N > 0){
    vec.push_back(number);
    it++;
    }
    else
    throw std::runtime_error("invalid size in N");
}

bool Span::is_already_added(int *arr_span, int nb_searched, int range){
    int  i = 0;
    while (i < range ){
        if (arr_span[i] == nb_searched)
            return true;
        i++;
    }
    return false;
}

// void Span::addNumbers(int range){
//     srand(time(NULL));
//     int random_number = rand() % 100 + 1;
//     for(int i = 0 ; i < range ; i++){
//         while (is_already_added(arr_span, random_number, i)){random_number = rand() % 100 + 1;}
//         arr_span[i] = rand() % 100 + 1;
//         it++;
//     }
// }

