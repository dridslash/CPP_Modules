/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tp.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:04:04 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/17 12:05:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class sub{
    private :
    std::string *names;
    public:
    sub(){names = new std::string[20];}
    std::string& operator[](std::size_t n){
        return names[n];
    }

    // const std::string& operator[](std::size_t n) const{
    //     return names[n];
    // }
};

template <typename T , typename T2>
void compare(const T& v1,  const T2& v2){
    //if (v1 > v2){
        std::cout<<"template says "<< v1 << v2 << "\n";
    //}
}

// template<> void compare<int>(int &a , int &b){
//     std::cout<<"int compare\n";
// }

template<unsigned int n1>
void print(const char (&p1)[n1]){
    std::cout<<p1;
}

// const int size = 5;

template<typename T = int , int size = 5> class stack_class{
    private:
    T st[size];
    public:
    static int t;
    stack_class();
    void push(T ob);
    T pop();
    T& operator[](std::size_t n);
    const T& operator[](std::size_t n) const;
};

template<typename T, int size>int stack_class<T,size>::t = 0;

template<typename T, int size>stack_class<T,size>::stack_class(){}

template<typename T, int size>void stack_class<T,size>::push(T ob){
    if (t < size){
        st[t] = ob;
        t++;
    }
}

template<typename T, int size>T& stack_class<T,size>::operator[](std::size_t n){
    if (n >= 0 && n < size - 1){
        return st[n];
    }
    throw std::runtime_error("Stack noo");
}

template<typename T, int size>const T& stack_class<T,size>::operator[](std::size_t n) const{
    if (n >= 0 && n < size - 1){
        return st[n];
    }
    throw std::runtime_error("Stack noo");
}

class p{
    public:
    typedef int INTERGER;
    INTERGER pl();
};

p::INTERGER p::pl(){
    return 20;
}

template<class T> class B{
    public:
    typedef typename T::INTERGER* ptr;
};
// void p(){std::cout<<size;}

int main(){
    // B<p> kl;
    // int my_int = 10;
    // B<p>::ptr h = &my_int;
    // std::cout<<*h;
    std::cout<<"fewf"<<std::endl;
    // typedef int ii;
    // typedef ii* p;
    // int k = 10;
    // p o = &k;
    // std::cout<<*o<<"\n";
    // p::INTERGER p = 10;
    // std::cout<<p<<std::endl;
    // try{
    // stack_class<> st;
    // st[0] = 12;
    // std::cout<<st[-1]<<"\n";
    // }catch(std::exception& e){
    //     std::cout<<e.what()<<"\n";
    // }
    // const int size = 10;
    // p();std::cout<<"\n";
    // std::cout<<size;
    //int a = 20;
    //int b = 90;
    //std::string p = "world";
    // const sub s;
    // s[0] = "names1";
    // // s.names[1] = "names2";
    // std::cout<<s[0]<<"\n";
    // // sub s2  = s;
    // // s2.names
    
    // compare(90,"world");
    // print("hello");
    // stack<std::string>s1;
    // s1.push("hello");
    // s1.push("world");
    // std::cout<<s1.pop()<<"\n";
}