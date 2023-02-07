/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:02:25 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 22:33:34 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    // Get the Fixed coordinates of the triangle vertices
    Fixed ax = a.getX();
    Fixed ay = a.getY();
    Fixed bx = b.getX();
    Fixed by = b.getY();
    Fixed cx = c.getX();
    Fixed cy = c.getY();
    Fixed px = point.getX();
    Fixed py = point.getY();

    // Calculate the areas of the triangles
    // area = 0.5 * abs((x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1)) "shoelace formula"
    float areaTriangle = 0.5f * std::abs((bx.getRawBits() - ax.getRawBits()) * (cy.getRawBits() \
        - ay.getRawBits()) - (cx.getRawBits() - ax.getRawBits()) * (by.getRawBits() - ay.getRawBits()));

    float areaA = 0.5f * std::abs((bx.getRawBits() - px.getRawBits()) * (cy.getRawBits() - \
        py.getRawBits()) - (cx.getRawBits() - px.getRawBits()) * (by.getRawBits() - py.getRawBits()));

    float areaB = 0.5f * std::abs((px.getRawBits() - ax.getRawBits()) * (cy.getRawBits() - \
        ay.getRawBits()) - (cx.getRawBits() - ax.getRawBits()) * (py.getRawBits() - ay.getRawBits()));

    float areaC = 0.5f * std::abs((bx.getRawBits() - ax.getRawBits()) * (py.getRawBits() - \
        ay.getRawBits()) - (px.getRawBits() - ax.getRawBits()) * (by.getRawBits() - ay.getRawBits()));

    // Check if the point is inside the triangle
    return areaTriangle && (areaA + areaB + areaC) == areaTriangle;
}
