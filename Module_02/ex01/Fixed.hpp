/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/31 22:58:04 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <tgmath.h>

class Fixed
{
private:
    int fixed;
    static const int    fract = 8;
public:
    Fixed(void);
    Fixed(const Fixed& copy);
    Fixed(const int integer);
    Fixed(const float floating);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, Fixed const& rhs);