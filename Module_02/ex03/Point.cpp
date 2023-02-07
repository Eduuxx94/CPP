/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:58:18 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 22:08:20 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(/* args */): x(0), y(0){
    //std::cout << "Default Point constructer called!" << std::endl;
}

Point::Point(const float x, const float y): x(x), y(y){
    //std::cout << "Float Point constructer called!" << std::endl;
}

Point::Point(const int x, const int y): x(x), y(y){
    //std::cout << "Int Point constructer called!" << std::endl;
}

Point::Point(const Point &copy): x(copy.x), y(copy.y) {
    //std::cout << "Copy Point constructer called!" << std::endl;
}

Point &Point::operator=(const Point &copy){
    if (this != &copy) {
        Fixed*  tempx = const_cast<Fixed*>(&this->x);
        Fixed*  tempy = const_cast<Fixed*>(&this->y);
        *tempx = copy.x;
        *tempy = copy.y;
    }
    return *this;
}

Point::~Point(){
    //std::cout << "Point destructer called!" << std::endl;
}

const Fixed Point::getX() const
{
    return this->x;
}

const Fixed Point::getY() const
{
    return this->y;
}

float Point::getXValue() const
{
    return this->x.toFloat();
}

float Point::getYValue() const
{
    return this->y.toFloat();
}

std::ostream& operator<<(std::ostream &o, const Point &p)
{
    return (o << "(" << p.getX() << "," << p.getY() << ")");
}
