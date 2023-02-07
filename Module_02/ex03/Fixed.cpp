/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:32 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/07 22:10:05 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
	this->fixed = 0;
	//std::cout << "Default Fixed constructer called!" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	*this = copy;//This line or the one below to see the difference between the subject!
	//this->fixed = copy.getRawBits();
	//std::cout << "Copy Fixed constructer called!" << std::endl;
}

Fixed::Fixed(const int integer) {
	this->fixed = (integer << this->fract);
	//std::cout << "Default Fixed Int constructer called!" << std::endl;
}

Fixed::Fixed(const float floating) {
	this->fixed = 0;
	this->fixed = roundf(floating * (1 << this->fract));
	//std::cout << "Default Fixed Float constructer called!" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs) {
	if (this != &rhs) {
		this->fixed = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
}

float   Fixed::toFloat(void) const {
	return ((float)this->fixed / (1 << this->fract));
}

int		Fixed::toInt(void) const {
	return roundf(this->fixed / (1 << this->fract));
}

int Fixed::getRawBits(void) const {
	return this->fixed;
}

void    Fixed::setRawBits(int const raw) {
	this->fixed = raw;
}

bool    Fixed::operator>(const Fixed& other) {
	if (this->fixed > other.getRawBits())
		return true;
	return false;
}

bool    Fixed::operator>=(const Fixed& other) {
	if (this->fixed >= other.getRawBits())
		return true;
	return false;
}

bool    Fixed::operator<(const Fixed& other) {
	if (this->fixed < other.getRawBits())
		return true;
	return false;
}

bool    Fixed::operator<=(const Fixed& other) {
	if (this->fixed <= other.getRawBits())
		return true;
	return false;
}

bool    Fixed::operator==(const Fixed& other) {
	if (this->fixed == other.getRawBits()) {
		return true;
	}
	return false;
}

bool    Fixed::operator!=(const Fixed& other) {
	if (this->fixed != other.getRawBits()) {
		return true;
	}
	return false;
}

Fixed&  Fixed::operator+(const Fixed &other) {
	this->fixed += other.getRawBits() >> other.fract;
	return *this;
}

Fixed&  Fixed::operator-(const Fixed &other) {
	this->fixed -= other.getRawBits() >> other.fract;
	return *this;
}

Fixed&  Fixed::operator*(const Fixed &other) {
	this->fixed *= other.getRawBits() >> other.fract;
	return *this;
}

Fixed&  Fixed::operator/(const Fixed &other) {
	this->fixed /= other.getRawBits() >> other.fract;
	return *this;
}

Fixed& Fixed::operator++(void) {
	this->fixed++;
	return *this;
}

Fixed Fixed::operator++(int i) {
	(void)i;
	Fixed	temp(*this);
	this->fixed++;
	return temp;
}

Fixed& Fixed::operator--(void) {
	this->fixed--;
	return *this;
}

Fixed Fixed::operator--(int i) {
	(void)i;
	Fixed temp(*this);
	this->fixed--;
	return temp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a.fixed < b.fixed)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a.fixed > b.fixed)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& out, Fixed const & rhs) {
    return  (out << rhs.toFloat());
}
