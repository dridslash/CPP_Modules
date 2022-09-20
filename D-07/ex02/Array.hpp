/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:08:13 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/18 16:10:38 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP
template<typename T> class Array{
    T *arr;
    public:
    unsigned int size_a;
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array&);
    Array& operator=(const Array&);
    T& operator[](std::size_t n);
    const T& operator[](std::size_t n)const;
    std::size_t size()const;
};

#include "Array.tpp"

#endif