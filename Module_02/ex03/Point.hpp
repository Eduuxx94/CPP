/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:18:54 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/01 23:42:10 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Point
{
private:
    const int x;
    const int y;
public:
    Point(void);
    Point(const float x, const float y);
    Point(const Point& copy);
    Point&  operator=(const Point& copy);
    ~Point();
};
