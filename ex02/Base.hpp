/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:34:08 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/01 12:31:11 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>
#include<ctime>
#include<cstdlib>

class Base
{
    public:
        Base();
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
