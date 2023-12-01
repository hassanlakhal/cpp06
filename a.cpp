/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:20:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/30 13:44:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Euros;

class Dollars {
private:
    double amountInDollars;

public:
    Dollars(double dollars) : amountInDollars(dollars) {}

    // Conversion operator to convert Dollars to Euros
    operator Euros() const;
    
    double getAmount() const {
        return amountInDollars;
    }
};

class Euros {
private:
    double amountInEuros;

public:
    Euros(double euros) : amountInEuros(euros) {}

    // No conversion constructor here

    double getAmount() const {
        return amountInEuros;
    }
};

// Conversion operator implementation for Dollars to Euros
Dollars::operator Euros() const {
    return Euros(amountInDollars * 0.85); // Simple conversion rate for demonstration
}

int main() {
    Dollars dollarsObject(100.0);

    // Using static_cast to explicitly convert Dollars to Euros
    Euros eurosObject = static_cast<Euros>(dollarsObject);

    // Implicit conversion using conversion operator
    Euros eurosObjectImplicit = dollarsObject; // Error: Conversion is ambiguous

    std::cout << "Amount in Dollars: " << dollarsObject.getAmount() << " $" << std::endl;
    std::cout << "Amount in Euros (using static_cast): " << eurosObject.getAmount() << " €" << std::endl;

    return 0;
}


