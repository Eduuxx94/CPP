/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:47:00 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 17:50:02 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
const T&    min(const T& arg_a, const T& arg_b) {
    return (arg_a < arg_b ? arg_a : arg_b);
}

template <typename T>
const T&    max(const T& arg_a, const T& arg_b) {
    return (arg_a >= arg_b ? arg_a : arg_b);
}

template <typename T>
void    swap(T& arg_a, T& arg_b) {
    T   arg_temp = arg_a;

    arg_a = arg_b;
    arg_b = arg_temp;
}

#endif
