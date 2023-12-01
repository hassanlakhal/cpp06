/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:29:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/30 13:14:08 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <strstream>
#include <sstream>
#include <iomanip>
class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
    public:
        static void convert(const std::string& str);
        static char getChar(const std::string& str);
        static int getInt(const std::string& str);
        static bool checkChar(const std::string& str);
        static double getDouble(const std::string& str);
        static float getFloat(const std::string& str);
};
