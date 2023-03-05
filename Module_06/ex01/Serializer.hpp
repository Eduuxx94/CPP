/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:17:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/04 15:43:56 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string name;
    int value;
};


class Serializer
{
private:
    /* data */
public:
    Serializer(/* args */);
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data*   deserialize(uintptr_t& raw);
};

#endif
