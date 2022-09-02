/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:27:14 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/08/20 10:12:39 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact{
    private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
    

    public:
    Contact();
    Contact(std::string fm, std::string lsm, std::string nck, std::string pnb, std::string drk);
    
    public:
    std::string old_f_name;
    std::string old_l_name;
    std::string old_nick_n;
    std::string old_p_number;
    std::string old_d_s;
    
    std::string Get_first_name() const;
    std::string Get_last_name() const;
    std::string Get_nickname() const;
    std::string Get_phone_number() const;
    std::string Get_darkest_secret() const;

    void Set_first_name(std::string fr_name);
    void Set_last_name(std::string ls_name);
    void Set_nickname(std::string ni_name);
    void Set_phone_number(std::string phone_nb);
    void Set_darkest_secret(std::string dr_sr);
};

#endif
