/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:17:00 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/06 15:13:27 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(/* args */)
{
}

Serializer::Serializer(const Serializer &copy)
{
    (void)copy;
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t& raw) {
    return reinterpret_cast<Data *>(raw);
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
    (void)rhs;
    return *this;
}
