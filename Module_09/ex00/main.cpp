/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:22:40 by ede-alme          #+#    #+#             */
/*   Updated: 2023/04/07 14:29:29 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    (void)argc;
    try {
        if (argc != 2)
            throw std::runtime_error("\033[0;31mError: Bad arguments.\033[0m");
        BitcoinExchange database;
        BitcoinExchange input(argv[1]);
        database.loadinfo();
        //database.showData();
        database.result(input);
        std::cout << "Program finished!" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
