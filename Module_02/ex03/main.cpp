/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 22:29:26 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    Point   a;
    Point   b(0, 5);
    Point   c(5, 0);
    if (bsp(a, b, c, Point(2, 2))) {
        std::cout << "The point is inside!" << std::endl;
    }
    else {
        std::cout << "The point is outside!" << std::endl;
    }

    
    std::cout << std::endl << "Next point:" << std::endl;
    Point   d(1 ,1);
    Point   e(0, 5);
    Point   f(5, 0);
    if (bsp(d, e, f, Point())) {
        std::cout << "The point is inside!" << std::endl;
    }
    else {
        std::cout << "The point is outside!" << std::endl;
    }

    std::cout << std::endl << "Next point:" << std::endl;
    Point   g(0 ,0);
    Point   h(0, 5);
    Point   i(0, 3);
    if (bsp(g, h, i, Point(0 , 0))) {
        std::cout << "The point is inside!" << std::endl;
    }
    else {
        std::cout << "The point is outside!" << std::endl;
    }

    std::cout << std::endl << "Next point:" << std::endl;
    Point   j(1 ,1);
    Point   l(0, 5);
    Point   m(5,0);
    if (bsp(j, l, m, Point(0 , 0))) {
        std::cout << "The point is inside!" << std::endl;
    }
    else {
        std::cout << "The point is outside!" << std::endl;
    }
    return 0;
}
