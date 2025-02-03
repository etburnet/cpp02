/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:37:30 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/03 11:35:04 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor */

Fixed::Fixed()
{
	this->value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = val << nb_bits; 
}

Fixed::Fixed(const float val)
{
	this->value = (int)(roundf(val * (1 << nb_bits)));
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(other);
}

/* Destructor */

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

/* Getter/Setter */

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

/* Operator Overload */

Fixed& Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &other)
{
	os << other.toFloat();
	return os;
}

int Fixed::operator>=(const Fixed& other)
{
	return(this->value >= other.getRawBits());
}

int Fixed::operator<=(const Fixed& other)
{
	return(this->value <= other.getRawBits());
}

int Fixed::operator<(const Fixed& other)
{
	return(this->value < other.getRawBits());
}

int Fixed::operator>(const Fixed& other)
{
	return(this->value > other.getRawBits());
}

int Fixed::operator==(const Fixed& other)
{
	return(this->value == other.getRawBits());
}

int Fixed::operator!=(const Fixed& other)
{
	return(this->value != other.getRawBits());
}

const Fixed Fixed::operator+(const Fixed& other)
{
    Fixed result;
    result.value = this->value + other.value;
    return result;
}

const Fixed Fixed::operator-(const Fixed& other)
{
    Fixed result;
    result.value = this->value - other.value;
    return result;
}

const Fixed Fixed::operator*(const Fixed& other)
{
	Fixed result;
	result.value = (this->value * other.value) / (1 << nb_bits);
	return result;
}

const Fixed Fixed::operator/(const Fixed& other)
{
	Fixed result;
	result.value = (this->value * (1 << nb_bits)) / other.value;
	return result;
}

Fixed& Fixed::operator--()
{
	value--;
	return(*this);
}

Fixed& Fixed::operator++()
{
	value++;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--value;
	return(temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++value;
	return(temp);
}

/* Other Functions */

float Fixed::toFloat(void) const
{
	return((float)this->value / (1 <<nb_bits));
}

int Fixed::toInt(void) const
{
	return (value >> nb_bits);
}

Fixed& Fixed::min(Fixed &ref_nb1, Fixed &ref_nb2)
{
	if (ref_nb1 < ref_nb2)
		return (ref_nb1);
	else
		return (ref_nb2);
}

const Fixed& Fixed::min(const Fixed &ref_nb1, const Fixed &ref_nb2)
{
	Fixed cp_nb1 = ref_nb1;
	Fixed cp_nb2 = ref_nb2;

	if (cp_nb1 < cp_nb2)
		return (ref_nb1);
	else
		return (ref_nb2);
}

Fixed& Fixed::max(Fixed &ref_nb1, Fixed &ref_nb2)
{
	if (ref_nb1 > ref_nb2)
		return (ref_nb1);
	else
		return (ref_nb2);
}

const Fixed& Fixed::max(const Fixed &ref_nb1, const Fixed &ref_nb2)
{
	Fixed cp_nb1 = ref_nb1;
	Fixed cp_nb2 = ref_nb2;

	if (cp_nb1 > cp_nb2)
		return (ref_nb1);
	else
		return (ref_nb2);
}
