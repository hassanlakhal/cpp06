/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:54:03 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/27 11:08:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<iostream>


// int main(void)
// {
// 	int a = 42;

// 	double b = a; // implicit conversion cast
// 	double c = (double)a; // explicit conversion cast

// 	double d = a; // implicit promotion -> okay (no problem to move to a more generic type)
// 	int e = d; // implicit demotion -> not really okay
// 	int f = (int)d; // explicit demotion -> okay
// // }
// #include <iostream>
// #include <iomanip>
// #include <sstream>

// class ScalarConverter {
// public:
//     static double getDouble(const std::string& str) {
//         double floatValue = std::stod(str.c_str());

//         std::ostringstream oss;
//         oss << std::fixed << std::setprecision(1) << floatValue;

//         std::istringstream formattedIss(oss.str());
//         double result;
//         formattedIss >> result;

//         return result;
//     }
// };

// int main() {
//     std::string inputString = "3.0";
//     double formattedValue = ScalarConverter::getDouble(inputString);

//     std::cout << "Original string: " << inputString << std::endl;
//     std::cout << "Formatted value: " << std::fixed << std::setprecision(1) << formattedValue << std::endl;

//     return 0;
// }

