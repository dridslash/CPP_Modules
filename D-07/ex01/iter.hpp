/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:49:41 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 10:24:42 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>void iter(T *arr,int lenght,void (*pr)(T const & x )){
    for(int i = 0; i < lenght; i++){
        pr(arr[i]);
    }
}

#endif