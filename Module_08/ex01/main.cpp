/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:13:36 by ede-alme          #+#    #+#             */
/*   Updated: 2023/03/11 20:11:48 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    std::cout << "Hello world!" << std::endl;
    Span    sp(5);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    Span    fill(200);
    try {
        fill.fillSpan(4);
        std::cout << "ShortestSpan: " << fill.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << fill.longestSpan() << std::endl;
        std::cout << std::endl << "Numbers: " << std::endl;
        std::cout << fill[0] << " \n" << fill[1] << " \n" << fill[2] << " \n" << fill[3] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
