/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/01 23:08:11 by ede-alme         ###   ########.fr       */
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
    Fixed&  operator=(const Fixed &rhs);
    ~Fixed();
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    bool    operator>(const Fixed& other);
    bool    operator>=(const Fixed& other);
    bool    operator<(const Fixed& other);
    bool    operator<=(const Fixed& other);
    bool    operator==(const Fixed& other);
    bool    operator!=(const Fixed& other);
    Fixed&  operator+(const Fixed &other);
    Fixed&  operator-(const Fixed &other);
    Fixed&  operator*(const Fixed &other);
    Fixed&  operator/(const Fixed &other);
    Fixed&  operator++(void);
    Fixed  operator++(int i);
    Fixed&  operator--(void);
    Fixed  operator--(int i);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, Fixed const& rhs);