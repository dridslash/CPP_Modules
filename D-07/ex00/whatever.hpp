/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:10:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 09:35:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>void swap(T& v1, T& v2);

template<typename T>T& max(T& v1, T& v2);

template<typename T>T& min(T& v1 , T& v2);

template<typename T>void swap(T& v1, T& v2){
    T tmp  = v1;
    v1  = v2;
    v2  = tmp;
}

template<typename T>T& min(T& v1, T& v2){
    if (v1 < v2){
        return (v1);
    }
    return v2;
}

template<typename T>T& max(T& v1 , T& v2){
    if (v1 > v2){
        return (v1);
    }
    return v2;
}

#endif
