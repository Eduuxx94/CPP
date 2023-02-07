/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:32 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 20:52:41 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
	this->fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;//This line or the one below to see the difference between the subject!
	//this->fixed = copy.getRawBits();
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed = (integer << this->fract);
}

Fixed::Fixed(const float floating) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed = 0;
	this->fixed = roundf(floating * (1 << this->fract));
}

Fixed& Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->fixed = rhs.fixed;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void) const {
	return ((float)this->fixed / (1 << this->fract));
}

int		Fixed::toInt(void) const {
	return roundf(this->fixed / (1 << this->fract));
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed;
}

void    Fixed::setRawBits(int const raw) {
	this->fixed = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const & rhs) {
    return  (out << rhs.toFloat());
}
