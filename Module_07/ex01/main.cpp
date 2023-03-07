/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:09:45 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 19:20:21 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    std::string str[] = {"Hello", "World!", "42", "Lisboa"};
    int         integer[] = {1, 2, 3};
    std::string text = "Teste";
    float       floating[] = {1, 1.5, 9.5};

    std::cout << std::endl << "Starting test:" << std::endl;
    iter(str, (sizeof(str) / sizeof(str[0])), printer);

    std::cout << std::endl << "Starting test:" << std::endl;
    iter(integer, (sizeof(integer) / sizeof(integer[0])), printer);

    std::cout << std::endl << "Starting test:" << std::endl;
    iter((text.c_str()), text.length(), printer);

    std::cout << std::endl << "Starting test:" << std::endl;
    iter(floating, (sizeof(floating) / sizeof(floating[0])), printer);
    return 0;
}
