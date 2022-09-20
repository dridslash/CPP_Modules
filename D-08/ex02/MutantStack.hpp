/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:17:23 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/18 15:52:57 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T>class MutantStack : public std::stack<T>{
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    MutantStack(const MutantStack&);
    MutantStack& operator=(const MutantStack&);
    ~MutantStack();
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif
