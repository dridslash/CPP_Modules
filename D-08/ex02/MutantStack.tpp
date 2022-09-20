/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:17:27 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/18 16:51:42 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<typename T>MutantStack<T>::MutantStack(){
    std::cout<<"default constructor called\n";
}
template<typename T>MutantStack<T>::MutantStack(const MutantStack& cop){
    *this = cop;
}
template<typename T>MutantStack<T>&  MutantStack<T>::operator=(const MutantStack& cop){
    *this = cop;
    return (*this);
}
template<typename T>MutantStack<T>::~MutantStack(){
    std::cout<<"destructor called\n";
}
template<typename T> typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return (this->c.begin());
}

template<typename T>typename MutantStack<T>::iterator MutantStack<T>::end(){
    return (this->c.end());
}

