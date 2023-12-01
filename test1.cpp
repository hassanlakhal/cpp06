/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:57:38 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/30 13:58:07 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// class Parent {};
// class Child1: public Parent {}; // Parent class is a more generic type
// class Child2: public Parent {}; // Child1 & Child2 are more specific classes

// // int main(void)
// // {
// // 	Child1 a; // reference value

// // 	Parent * b = &a; // implicit reinterpretation cast
// // 	Parent * c = (Parent *) &a; // explicit reinterpretation cast

// // 	Parent * d = &a; // implicit upcast -> ok
// // 	Child1 * e = d; // implicit downcast -> no!
// // 	Child2 * f = (Child2 *) d; // explicit downcast _> ok but really?
    
// // }

// int main(void)
// {
// 	int a = 42; // reference value

// 	double b = a; // implicit promotion -> ok
// 	int c = b; // implicit demotion -> no!
// 	int d = static_cast<int>(b); // explicit demotion -> ok

// 	return 0;
// }
#include <iostream>

class Centimeters {
private:
    double lengthInCentimeters;

public:
    // Conversion constructor to convert double (Inches) to Centimeters
    Centimeters(double inches) : lengthInCentimeters(inches * 2.54) {}

    double getLength() const {
        return lengthInCentimeters;
    }
};

int main() {
    // Using static_cast to explicitly convert double (Inches) to Centimeters
    Centimeters centimetersObject = static_cast<Centimeters>(10.0);

    std::cout << "Length in centimeters: " << centimetersObject.getLength() << " cm" << std::endl;

    return 0;
}

