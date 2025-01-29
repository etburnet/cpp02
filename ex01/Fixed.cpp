/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:37:30 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/29 16:38:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = val * 100;
}

Fixed::Fixed(const float val)
{
	float	temp = (int)val * 100;
	int		temp_int = roundf(temp);
	std::cout << "Float constructor called" << std::endl;
	this->value = temp_int;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &other)
{
	os << other.toFloat();
    return os; 
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(other);
}

float Fixed::toFloat(void) const
{
	return((float)this->value / (float)(1 <<Fixed::nb_bits));
}

int Fixed::toInt(void) const
{
	return(this->value / 100);
}
