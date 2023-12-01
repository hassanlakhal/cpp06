/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:11:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/29 11:45:16 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t tmp;

    tmp = reinterpret_cast<uintptr_t>(ptr);
    return tmp;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* tmp;

    tmp = reinterpret_cast<Data*>(raw);
    return tmp;
}