/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:07:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/27 12:09:15 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

char ScalarConverter::getChar(const std::string& str)
{
   
    int intValue;
    char c = 0;
    std::istringstream my_str(str.c_str());
    if (str.size() == 1 && isalpha(str[0]))
        return str[0];
    else if (my_str >> intValue && intValue <= 127 && isprint(static_cast<char>(intValue)))
        c = intValue;
    else
    {
        if(str != "nan")
            throw std::runtime_error("char: Non displayable");
        else if (str == "nan")
             throw std::runtime_error("char: impossible");
    }
    return c;
}

int ScalarConverter::getInt(const std::string& str)
{
    int intValue;
    std::istringstream my_str(str.c_str());
    if (str.size() == 1 && isalpha(str[0]))
        return str[0];
    else if (!(my_str >> intValue))
        throw std::runtime_error("impossible");
    return intValue;
}

double ScalarConverter::getDouble(const std::string& str)
{
    if (str.size() == 1 && isalpha(str[0]))
        return str[0];
    double floatValue = std::stod(str.c_str());
    return floatValue;
}

float ScalarConverter::getFloat(const std::string& str)
{
    if (str.size() == 1 && isalpha(str[0]))
        return str[0];
    float floatValue = std::stof(str.c_str());
    return floatValue;
}

void ScalarConverter::convert(const std::string& str)
{
    try
    {    
        char c = ScalarConverter::getChar(str);
        std::cout << "Char : "<< "'" <<  c << "'" <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Int : "<< ScalarConverter::getInt(str) <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        float f = ScalarConverter::getFloat(str);
        std::cout << "float : "<<std::fixed << std::setprecision(1) << f << "f" <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        double d = ScalarConverter::getDouble(str);
        std::cout << "double : " << std::fixed << std::setprecision(1) << d <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
