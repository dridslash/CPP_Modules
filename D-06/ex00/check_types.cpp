/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_types.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:57:18 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/11 17:58:29 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool check_if_int(std::string common_st){
    size_t p = 0;
    while(common_st[p] == '-' || common_st[p] == '+' )
    p++;
    for(size_t i = p; i < common_st.length(); i++){
        if (!isdigit(common_st[i]))
            return false;
    }
    try{
        int is_int = stoi(common_st);
        (void)is_int;
        return true;
    }catch(...){
        return false;
    }
    return false;
}

bool check_if_float(std::string common_st){
    size_t j = 0;
    int count = 0;
     size_t p = 0;
    while(j < common_st.length()){
        if (common_st[j] == '.')
        count++;
        j++;
    }
    if (count == 0)
        return false;
    if (count > 1)
        return false;
    while(common_st[p] == '-' || common_st[p] == '+' )
    p++;
    for(size_t i = p; i < common_st.length(); i++){
        if ((!isdigit(common_st[i]) && common_st[i] != '.') || (common_st[common_st.length() - 1] != 'f')){
             if (i != common_st.length() - 1)
            return false;
            else if (i == common_st.length() - 1 && common_st[common_st.length() - 1] != 'f')
            return false;
        }
    }
    try{
        float is_float = stof(common_st);
         (void)is_float;
        return true;
    }catch(...){
        return false;
    }
    return false;
}


bool check_if_double(std::string common_st){
    size_t j = 0;
    int count = 0;
    while(j < common_st.length()){
        if (common_st[j] == '.')
        count++;
        j++;
    }
    if (count == 0)
        return false;
    if (count > 1)
        return false;
    size_t p = 0;
    while(common_st[p] == '-' || common_st[p] == '+' )
    p++;
    for(size_t i = p; i < common_st.length(); i++){
        if ((!isdigit(common_st[i]) && common_st[i] != '.'))
            return false;
    }
    try{
        double is_double = stod(common_st);
         (void)is_double;
        return true;
    }catch(...){
        return false;
    }
    return false;
}

void set_Types(char &switcher, int &take_int, float &take_float, double &take_double, std::string common_st, char &c){
    if (check_if_int(common_st)){
            take_int = stoi(common_st);
            switcher = 'i';
        }
        else if (check_if_float(common_st)){
            take_float = stof(common_st);
            switcher = 'f';
        }
        else if (check_if_double(common_st)){
            take_double = stod(common_st);
            switcher = 'd';
        }
        else{
        switcher = 'c';
        c = common_st[0];
        }
}