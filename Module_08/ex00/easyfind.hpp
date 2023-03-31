/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:13:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/09 21:37:04 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

template <typename T, typename U>
void    easyfind(const T& container, U value) {
    if (container.empty()) {
        throw std::invalid_argument("\033[0;31mContainer is empty!\033[0m");
    }
    for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {
        if (*it == value) {
            std::cout << value << " was found in index: " << std::distance(container.begin(), it) << std::endl;
            return ;
        }
    }
    throw std::invalid_argument("\033[0;31mElement was not found!\033[0m");
}

#endif
