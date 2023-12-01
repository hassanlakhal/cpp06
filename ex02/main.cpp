/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:40:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/01 16:16:13 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    // Base * obj = generate();
    A a;
    B b;
    C c;
    // Base *obj[3] = {generate(),generate(),generate()};
    // Base *obj1[3] = {0};


        identify(b);
        identify(c);
        identify(a);
    
    
    // for (int i = 0; i < 3; i++)
    // {
    //     identify(obj1[i]);
    //     identify(obj1[i]);
    //     // delete obj[i];
    // }
    return 0;
}