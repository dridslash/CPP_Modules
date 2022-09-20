/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:17:54 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/20 08:36:04 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span{
    public:
    static unsigned int it;
    unsigned int N;
    //int *arr_span;
    std::vector<int> vec;
    Span();
    Span(unsigned int n);
    Span(const Span &);
    Span& operator=(const Span &);
    ~Span();
    int shortestSpan();
    int longestSpan();
    void addNumber(int number);
    template<typename T>void addNumbers(T& begin , T& end);
    bool is_already_added(int *arr_span, int nb_searched, int range);
    
};

template<typename T>void Span::addNumbers(T& begin , T&end){
     T it;
     srand(time(NULL));
    if (N > 0){
        int random_number = rand() % 100 + 1;
        for(it = begin ; it != end ; it++){
            random_number = rand() % 100 + 1;
            vec.push_back(random_number);
        }
    }
    else
    throw std::runtime_error("invalid size in N");
}

#endif