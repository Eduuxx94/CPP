/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/31 20:29:56 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
    int fixed;
    static const int    fract = 8;
public:
    Fixed(void);
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};
