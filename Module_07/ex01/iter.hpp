/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:47:00 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 19:01:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* address, int length, void (*function)(T&)) {
    for (int i = 0; i < length; i++) {
        function(address[i]);
    }
}

template <typename T>
void    printer(T& value) {
    std::cout << value << std::endl;
}

#endif
