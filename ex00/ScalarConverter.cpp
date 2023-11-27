/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:07:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/27 11:07:38 by hlakhal-         ###   ########.fr       */
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
        std::cout << "char: Non displayable" << std::endl;
    return c;
}

int ScalarConverter::getInt(const std::string& str)
{
    int intValue;
    std::istringstream my_str(str.c_str());
    if (str.size() == 1 && isalpha(str[0]))
        return str[0];
    else if (!(my_str >> intValue))
        return 0;
    return intValue;
}

double ScalarConverter::getDouble(const std::string& str)
{
    double floatValue = std::stod(str.c_str());
    return floatValue;
}

float ScalarConverter::getFloat(const std::string& str)
{
    float floatValue = std::stof(str.c_str());
    return floatValue;
}

void ScalarConverter::convert(const std::string& str)
{
    std::cout << ScalarConverter::getChar(str) <<  std::endl;
    std::cout << ScalarConverter::getInt(str) <<  std::endl;
    std::cout << std::fixed << std::setprecision(1) << ScalarConverter::getDouble(str) <<  std::endl;
    std::cout << std::fixed << std::setprecision(1) << ScalarConverter::getFloat(str) << "f" <<  std::endl;
}
