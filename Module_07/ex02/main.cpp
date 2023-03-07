/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:25:27 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/07 22:38:20 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

    std::cout<< std::endl << "\033[0;32mStarting test for int array:\033[0m" << std::endl;
    Array<int>   a(6);

    try {
        a[0] = 0;
        a[1] = 12;
        std::cout << a[0] << std::endl << a[1] << std::endl;
        std::cout << "Size of array: " << a.size() << std::endl;
        a[2] = 12;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\033[0;32mStarting test for string array:\033[0m" << std::endl;
    Array<std::string>   b(2);
    
    try {
        b[0] = "Hello ";
        b[1] = "World!";
        std::cout << b[0] << b[1] << std::endl;
        std::cout << "Size of array: " << b.size() << std::endl;
        b[2] = "Trying to buffer overflow attack!";
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "End of Tests." << std::endl << std::endl;
}
