/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:55:56 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/29 11:55:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{
    Data *data = new Data;
    uintptr_t raw;
    data->a = 0;
    data->b = 'c';
    data->c = true;
    data->e = 14.00;

    std::cout << "before serializing : " << data << std::endl;
    
    raw = Serializer::serialize(data);
    data = Serializer::deserialize(raw);

    std::cout << "after serializing : " << data << std::endl;

    delete data;
}


