/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:11:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/30 18:07:57 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
class Dirham;


class Dollar
{
private:
    double amountIntDollar;
public:
    Dollar(double dollars) : amountIntDollar(dollars){}
    operator Dirham() const;
    double getAmount() const 
    {
        return amountIntDollar;
    }
    // ~Dollar();
};


class Dirham
{
    private:
        double amountIntDirham;
    public:
        Dirham(double dirham) : amountIntDirham(dirham){}
        double getAmount () const 
        {
            return amountIntDirham;
        }
    // ~Dirham();
};

Dollar::operator Dirham() const 
{
    std::cout << "test\n" << std::endl;
    return Dirham(amountIntDollar * 0.099);
}

int main()
{
    Dollar dollarObj(100.0);
    // Dirham dirhamObj = Dirham(dollarObj);
    Dirham dirhamObj1 = dollarObj;
    std::cout << "Amount in Dollars : " << dollarObj.getAmount() << " $"<< std::endl;
    std::cout << "Amount in Dirham : (using static_cast) " << dirhamObj1.getAmount() << " Dh" << std::endl;
}
