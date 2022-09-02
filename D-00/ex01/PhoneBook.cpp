/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:32:16 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 10:30:56 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook(){}

bool PhoneBook::Check_if_is_number(std::string phone_number)
{
    size_t i = 0;
    for(i = 0 ; i < phone_number.length();i++){
        if (!isdigit(phone_number[i]))
            return false;
    }
    return true;
}

void PhoneBook::Add_Contacts(PhoneBook *phonebook,int index,std::string input_holder){
    Contact contact;
    if (!(std::cin.eof()))
    std::cout << "please enter your first name\n";
    getline(std::cin,input_holder);
    while(input_holder.empty() && !(std::cin.eof())){
        std::cout << "a field should not be empty\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_f_name = input_holder;
    if (input_holder.length() > 10){
        input_holder = input_holder.substr(0,10);
        input_holder.replace(9,10,".");
    }
    (*phonebook).contacts[index].Set_first_name(input_holder);
    //---------------------------first_name_section-------------------------
    if (!(std::cin.eof()))
    std::cout << "please enter your last name\n";
    getline(std::cin,input_holder);
    while(input_holder.empty() && !(std::cin.eof())){
        std::cout << "a field should not be empty\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_l_name = input_holder;
    if (input_holder.length() > 10){
        input_holder = input_holder.substr(0,10);
        input_holder.replace(9,10,".");
    }
    (*phonebook).contacts[index].Set_last_name(input_holder);
    //-------------------------last_name_section----------------------------
    if (!(std::cin.eof()))
    std::cout << "please enter your nickname\n";
    getline(std::cin,input_holder);
    while(input_holder.empty() && !(std::cin.eof())){
        std::cout << "a field should not be empty\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_nick_n = input_holder;
    if (input_holder.length() > 10){
        input_holder = input_holder.substr(0,10);
        input_holder.replace(9,10,".");
    }
    (*phonebook).contacts[index].Set_nickname(input_holder);
    //-------------------------nick_name_section----------------------------
    if (!(std::cin.eof()))
    std::cout << "please enter your phone number\n";
    getline(std::cin,input_holder);
    while(input_holder.empty() && !(std::cin.eof())){
        std::cout << "a field should not be empty\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_p_number = input_holder;
    while(!((*phonebook).Check_if_is_number(input_holder))){
        std::cout<< "phone number should contain only numbers\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_p_number = input_holder;
    if (input_holder.length() > 10){
        input_holder = input_holder.substr(0,10);
        input_holder.replace(9,10,".");
    }
    (*phonebook).contacts[index].Set_phone_number(input_holder);
    //-----------------------phone_number_section--------------------------
    if (!(std::cin.eof()))
    std::cout << "what is you deepest secret !!!\n PS: i wont tell anyone\n";
    getline(std::cin,input_holder);
    while(input_holder.empty() && !(std::cin.eof())){
        std::cout << "a field should not be empty\n";
        getline(std::cin,input_holder);
    }
    (*phonebook).contacts[index].old_d_s = input_holder;
    if (input_holder.length() > 10){
        input_holder = input_holder.substr(0,10);
        input_holder.replace(9,10,".");
    }
    (*phonebook).contacts[index].Set_darkest_secret(input_holder);
    //------------------------darkest_secret_section-----------------------
}

void PhoneBook::Display_Contacts(PhoneBook phonebook,int index){
    if (index > 7)
        index = 8;
    int reseted_index = 0;
    std::cout<<std::right<<std::setw(10)<<"-------|"<<std::right<<std::setw(10)<<"-------|"<<std::right<<std::setw(10)<<"-------|"<<std::right<<std::setw(10)<<"-------|\n";
    std::cout<<std::right<<std::setw(10)<<"--INDEX-|"<<std::right<<std::setw(10)<<"FIRSTNAME|"<<std::right<<std::setw(10)<<"LAST_NAME|"<<std::right<<std::setw(10)<<"NICKNAME|\n";
    while(reseted_index < index){
    std::cout<<std::right<<std::setw(10)<<reseted_index + 1<<"|"<<std::right<<std::setw(10)<<phonebook.contacts[reseted_index].Get_first_name()<<"|"<<std::right<<std::setw(10)<<phonebook.contacts[reseted_index].Get_last_name()<<"|"<<std::right<<std::setw(10)<<phonebook.contacts[reseted_index].Get_nickname()<<"\n";
    reseted_index++;
    }
        std::cout<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|\n";
    std::cout<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|"<<std::right<<std::setw(10)<<"------|\n";
}

void PhoneBook::Display_Contact_By_Index(PhoneBook phonebook,int index_searched,int index){
    int reseted_index = 0;
    int flag = 0;
    if (index > 7)
        index = 8;
    while(reseted_index < index){
    if (reseted_index == index_searched - 1){
        std::cout << "INDEX ------: " << reseted_index + 1 << "\n";
        std::cout << "FIRST_NAME ------: " << phonebook.contacts[reseted_index].old_f_name << "\n";
        std::cout << "LAST_NAME ------: " << phonebook.contacts[reseted_index].old_l_name << "\n";
        std::cout << "NICKNAME ------: " << phonebook.contacts[reseted_index].old_nick_n<< "\n";
        std::cout << "PHONE_NUMBER ------: " << phonebook.contacts[reseted_index].old_p_number << "\n";
        std::cout << "DARKEST_SECRET ------: " << phonebook.contacts[reseted_index].old_d_s << "\n";
        flag = 1;
    }
    reseted_index++;
    }
    if (flag == 0)
    std::cout<<"index of contact not found or out of range\n";
}
