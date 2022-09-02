/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:26:20 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 10:30:33 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    public:
    Contact contacts[8];

    public :
    PhoneBook();
    void Add_Contacts(PhoneBook *phonebook,int index,std::string input_holder);
    void Display_Contacts(PhoneBook phonebook,int index);
    void Display_Contact_By_Index(PhoneBook phonebook,int index_searched,int index);
    bool Check_if_is_number(std::string phone_number);
};
#endif