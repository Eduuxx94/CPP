/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:19:15 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/01 23:45:06 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0){
}

Point::Point(const float x, const float y): x(x), y(y){
    
}

Point::Point(const Point& copy): x(copy.x), y(copy.y) {

}

Point&  Point::operator=(const Point& copy) {
    *this = copy;
    return *this;
}

Point::~Point() {
}
