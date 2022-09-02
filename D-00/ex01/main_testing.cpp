/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_testing.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:37 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/08 08:43:07 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <limits>

int main(){
    PhoneBook phonebook;
    std::string input_holder;
    int index = 0;
    int hold_index_modif = 0;
    int last_modified = 0;
    std::cout<<"Welcome to phonebook management\n";
    std::cout<<"to add a contact type ADD to search for a contact type SEARCH to exit the phonbook management type EXIT\n";
    do{
        if(!(std::cin.eof()))
        std::cout<<"\n--->";
        getline(std::cin,input_holder);
        if (std::cin.eof()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            break;
        }
        if (input_holder == "ADD"){
            if (index > 7){
                hold_index_modif = last_modified;
                last_modified++;
            }
            else
            hold_index_modif = index;
            phonebook.Add_Contacts(&phonebook,hold_index_modif,input_holder);
            index++;
        }
         if (input_holder == "SEARCH"){
           phonebook.Display_Contacts(phonebook,index);
            std::cout<<"\nenter the index of the contact you want to dispaly\n";
            getline(std::cin,input_holder);
            while(((input_holder.empty()) || !(phonebook.Check_if_is_number(input_holder))) && !(std::cin.eof())){
                std::cout<<"your input for index is wrong enter a number\n";
                getline(std::cin,input_holder);
            }
            if(!(std::cin.eof()))
            phonebook.Display_Contact_By_Index(phonebook,std::stoi(input_holder),index);
        }
    }while(input_holder != "EXIT");
    return (0);
}