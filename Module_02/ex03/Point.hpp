/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:58:32 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 22:01:44 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point(/* args */);
    Point(const float x, const float y);
    Point(const int x, const int y);
    Point(const Point& copy);
    ~Point();
    const Fixed getX() const;
    const Fixed getY() const;
    float   getXValue() const;
    float   getYValue() const;
    Point&  operator=(const Point& copy);
};
std::ostream&   operator<<(std::ostream& o, const Point& p);
bool bsp( Point const a, Point const b, Point const c, Point const point);