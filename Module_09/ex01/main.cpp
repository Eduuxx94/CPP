/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:15:14 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/08 14:41:49 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    try {
        if (argc != 2)
            throw std::runtime_error("\033[0;31mError: Missing arguments.\033[0m");
        RPN calculation(argv[1]);
        std::cout << "Result: " << calculation.getRPN() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}