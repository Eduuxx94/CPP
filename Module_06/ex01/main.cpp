/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:32:22 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/04 20:39:49 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data        simple;
    uintptr_t   ptr = 0;
    Data*       aloc = 0;

    std::cout << "Before use cast:" << std::endl;
    std::cout << &simple << std::endl;
    std::cout << aloc << std::endl;

    std::cout << "After cast:" << std::endl;
    ptr = Serializer::serialize(&simple);
    aloc = Serializer::deserialize(ptr);
    std::cout << &simple << std::endl;
    std::cout << aloc << std::endl;
}