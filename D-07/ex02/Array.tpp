/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:08:10 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/19 13:47:42 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>Array<T>::Array(){
    std::cout<<"default constructor called\n";
    arr = NULL;
}

template<typename T>Array<T>::~Array(){
     std::cout<<"destructor called\n";
    if (arr)
    delete arr;
}

template<typename T>Array<T>::Array(unsigned int n){
    std::cout<<"param constructor called\n";
    arr = new T[n];
    size_a = n;
}

template<typename T>Array<T>::Array(const Array<T>& cop){
    arr = new T();
    *(arr) = *(cop.arr);
}

template<typename T>Array<T>& Array<T>::operator=(const Array<T>& cop){
    if (arr)
        delete arr;
    arr = new T();
    *(arr) = *(cop.arr);
    return (*this);
}

template<typename T>T& Array<T>::operator[](size_t n){
    if (n >= size()){
        throw std::runtime_error("index is out of bound");
    }
    return arr[n];
}

template<typename T>const T& Array<T>::operator[](size_t n)const{
    if (n >= size()){
        throw std::runtime_error("index is out of bound");
    }
    return arr[n];
}

template<typename T>size_t Array<T>::size()const{
    return (size_a);
}