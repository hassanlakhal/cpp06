/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:11:46 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/29 10:29:45 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Data.hpp"

class Serializer
{
    private:
        
    public:
        Serializer();
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


