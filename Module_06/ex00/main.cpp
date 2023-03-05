/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:26:18 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/02 19:08:53 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Please you must execute with one argument!" << std::endl;
        return 1;
    }
    ScalarConverter::convert(std::string(argv[1]));
    return 0;
}