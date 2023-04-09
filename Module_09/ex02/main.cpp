/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:57:00 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/09 17:27:42 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try {
        if (argc < 2 || argc > 3001)
            throw std::runtime_error("\033[0;31mError: Invalid arguments size.\033[0m");
        argv = &argv[1];
        if (PmergeMe::invalidArgs(argv, argc - 1))
            throw std::runtime_error("\033[0;31mError: Was detected an invalid argument.\033[0m");
        PmergeMe container(argv);
        container.startShort();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}