/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:17:29 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/20 08:41:54 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    //--it;
    while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
    }
    std::cout<<"------------ADAPTER TEST-------\n";
    std::stack<int> s(mstack);
    s.push(200);
    while(!s.empty()) {
        std::cout<<s.top()<<"\n";
        s.pop();
    }
    std::cout<<"-----------STD_LIST-----------\n";
    std::list<int> li;
    li.push_front(5);
    li.push_front(17);
    std::list<int>::iterator it_li = li.begin();
    std::cout << *it_li << std::endl;
    li.pop_front();
    std::cout<<li.size() << std::endl;
    li.push_back(3);
    li.push_back(5);
    li.push_back(737); //[...] mstack.push(0);
    std::list<int>::iterator it11_li = li.begin();
    std::list<int>::iterator ite11_li = li.end();
    // ++it;
    //--it;
    while (it11_li != ite11_li) {
    std::cout << *it11_li << std::endl;
    ++it11_li;
    }
        return 0;
}