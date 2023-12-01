/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:19:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/01 15:20:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::Base()
{
}

Base::~Base()
{
}

Base * generate(void)
{
    srand(time(0));
    int i = (rand() % 4) + 1;
    switch (i)
    {
        case 1:
            return new A;
        case 2:
            return new B;
        case 3:
            return new C;          
        default:
            return NULL;
    }
}

void identify(Base* p)
{
   if (A* ptr = dynamic_cast<A*>(p))
        std::cout << "class A" << std::endl;
    else if(B* ptr1 = dynamic_cast<B*>(p))
        std::cout << "class B" << std::endl;
    else if(C* ptr1 = dynamic_cast<C*>(p))
        std::cout << "class C" << std::endl;
    else
        std::cout << "Unkown Type" << std::endl; 
}

void identify(Base& p)
{
    try
    {
       (void)dynamic_cast<A&>(p);
       std::cout << "class A" << std::endl;
        
    }
    catch(std::bad_cast&)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "class B" << std::endl;  
        }
        catch(std::bad_cast&)
        {
            try
            {
                (void)dynamic_cast<B&>(p);
                std::cout << "class B" << std::endl;  
            }
            catch(std::bad_cast&)
            {
                try
                {
                    (void)dynamic_cast<C&>(p);
                    std::cout << "class C" << std::endl;  
                }
                catch(std::bad_cast& e)
                {
                    std::cout << "unknow" << std::endl;
                }
            }
        }
        
    }
    return ;
}