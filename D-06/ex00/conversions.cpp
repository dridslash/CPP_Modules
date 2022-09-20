/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:55:19 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/12 15:28:16 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>


void convert(char switcher, int &take_int, float &take_float, double &take_double, char c){
    if (switcher == 'i'){
             c = static_cast<char>(take_int);
             take_float = static_cast<float>(take_int);
             take_double = static_cast<double>(take_int);
            if (c == '\0' || (c < 32 || c > 125) || take_int > 125)
            std::cout<<"char: "<<"Non displayable"<<"\n";
            else
            std::cout<<"char: "<<c<<"\n";
            if (take_double > std::numeric_limits<int>::max() || take_double < std::numeric_limits<int>::min())
            std::cout<<"int: "<<"impossible "<<"\n";
            else
            std::cout<<"int: "<<take_int<<"\n";
            std::cout<<"float: "<<std::fixed<<std::setprecision(1)<<take_float<<"f"<<"\n";
            std::cout<<"double: "<<std::fixed<<std::setprecision(1)<<take_double<<"\n";
        }
        else if (switcher == 'f'){
            take_int = static_cast<int>(take_float);
            c = static_cast<char>(take_int);
            take_double = static_cast<double>(take_float);
            if (c == '\0' || (c < 32 || c > 125) || take_int > 125)
            std::cout<<"char: "<<"Non displayable"<<"\n";
            else
            std::cout<<"char: "<<c<<"\n";
            if (take_double > std::numeric_limits<int>::max() || take_double < std::numeric_limits<int>::min())
            std::cout<<"int: "<<"impossible "<<"\n";
            else
            std::cout<<"int: "<<take_int<<"\n";
            std::cout<<"float: "<<std::fixed<<std::setprecision(1)<<take_float<<"f"<<"\n";
            std::cout<<"double: "<<std::fixed<<std::setprecision(1)<<take_double<<"\n"; 
        }
        else if (switcher == 'd'){
            take_int = static_cast<int>(take_double);
            c = static_cast<char>(take_int);
            take_float = static_cast<float>(take_double);
            if (c == '\0' || (c < 32 || c > 125) || take_int > 125)
            std::cout<<"char: "<<"Non displayable"<<"\n";
            else
            std::cout<<"char: "<<c<<"\n";
            if (take_double > std::numeric_limits<int>::max() || take_double < std::numeric_limits<int>::min())
            std::cout<<"int: "<<"impossible "<<"\n";
            else
            std::cout<<"int: "<<take_int<<"\n";
            std::cout<<"float: "<<std::fixed<<std::setprecision(1)<<take_float<<"f"<<"\n";
            std::cout<<"double: "<<std::fixed<<std::setprecision(1)<<take_double<<"\n";   
        }
        else if (switcher == 'c'){
            take_int = static_cast<int>(c);
            take_float = static_cast<float>(take_int);
            take_double = static_cast<double>(take_int);
            if (c == '\0' || (c < 32 || c > 125) || take_int > 125)
            std::cout<<"char: "<<"Non displayable"<<"\n";
            else
            std::cout<<"char: "<<c<<"\n";
            if (take_double > std::numeric_limits<int>::max() || take_double < std::numeric_limits<int>::min())
            std::cout<<"int: "<<"impossible "<<"\n";
            else
            std::cout<<"int: "<<take_int<<"\n";
            std::cout<<"float: "<<std::fixed<<std::setprecision(1)<<take_float<<"f"<<"\n";
            std::cout<<"double: "<<std::fixed<<std::setprecision(1)<<take_double<<"\n";   
        }
}

bool is_all_digit(std::string common_st){
    for(size_t i = 0 ;i < common_st.length();i++){
        if (!isdigit(common_st[i]))
        return false;
    }
    return true;
}