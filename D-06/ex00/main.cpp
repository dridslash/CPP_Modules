/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:49:55 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/09/12 15:24:43 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>

bool check_if_int(std::string common_st);
bool check_if_float(std::string common_st);
bool check_if_double(std::string common_st);
void set_Types(char &switcher, int &take_int, float &take_float, double &take_double, std::string common_st, char &c);
void convert(char switcher, int &take_int, float &take_float, double &take_double, char c);
bool is_all_digit(std::string common_st);

int main(int argc, char**argv){
    if (argc > 1){
        std::string common_st = argv[1];
        if (common_st.compare("nan") == 0){
            std::cout<<"char: "<<"impossible"<<"\n";
            std::cout<<"int: "<<"impossible"<<"\n";
            std::cout<<"float: "<<"nanf"<<"\n";
            std::cout<<"double: "<<"nan"<<"\n";
        }else if (common_st.compare("-inf") == 0){
            std::cout<<"char: "<<"impossible"<<"\n";
            std::cout<<"int: "<<"impossible"<<"\n";
            std::cout<<"float: "<<"-inff"<<"\n";
            std::cout<<"double: "<<"-inf"<<"\n";
        }
        else if (common_st.compare("+inf") == 0){
            std::cout<<"char: "<<"impossible"<<"\n";
            std::cout<<"int: "<<"impossible"<<"\n";
            std::cout<<"float: "<<"+inf"<<"\n";
            std::cout<<"double: "<<"+inf"<<"\n";
        }
        else if (common_st.compare("-inff") == 0){
            std::cout<<"char: "<<"impossible"<<"\n";
            std::cout<<"int: "<<"impossible"<<"\n";
            std::cout<<"float: "<<"-inff"<<"\n";
            std::cout<<"double: "<<"-inff"<<"\n";
        }
        else if (common_st.compare("+inff") == 0){
            std::cout<<"char: "<<"impossible"<<"\n";
            std::cout<<"int: "<<"impossible"<<"\n";
            std::cout<<"float: "<<"+inff"<<"\n";
            std::cout<<"double: "<<"+inff"<<"\n";
        }
        else{
            if (is_all_digit(common_st)){
        if ((stold(common_st) > std::numeric_limits<int>::max()  && stold(common_st) != 0)|| 
            (stold(common_st) < std::numeric_limits<int>::min()  && stold(common_st) != 0)  ||
            (stold(common_st) > std::numeric_limits<float>::max() && stold(common_st) != 0) ||
            (stold(common_st) < std::numeric_limits<float>::min() && stold(common_st) != 0) ||
            (stold(common_st) > std::numeric_limits<double>::max() && stold(common_st) != 0) ||
            (stold(common_st) < std::numeric_limits<double>::min() && stold(common_st) != 0)){
            std::cout<<"protecter has spoken no cast shall be done"<<std::endl;
            return 1;
        }
        }
        int take_int;
        float take_float;
        double take_double;
        char c;
        char switcher;
        set_Types(switcher,take_int,take_float,take_double,common_st,c);
        convert(switcher,take_int,take_float,take_double,c);
        }
    }else
    std::cout<<"Argument mismatch\n";
}