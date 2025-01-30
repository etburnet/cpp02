/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:37:30 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/30 15:04:27 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/* Constructor */
Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = val << nb_bits; 
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(val * (1 << nb_bits)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(other);
}

/* Destructor */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Getter/Setter */

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

/* Operator Overload */

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

const Fixed& Fixed::operator+(const Fixed& other)
{
	return other;
}

const Fixed& Fixed::operator-(const Fixed& other)
{
	return Fixed(-other.value);
}

Fixed& Fixed::operator*(const Fixed& other)
{

}

Fixed& Fixed::operator/(const Fixed& other)
{

}

int Fixed::operator--()
{
	return(this->value--);
}

int Fixed::operator++()
{
	return(this->value++);
}

int Fixed::operator--(int)
{
	//return(--(this->value));
}

int Fixed::operator++(int)
{
	//return(++(this->value));
}

/* Other Functions */

float Fixed::toFloat(void) const
{
	return((float)this->value / (float)(1 <<Fixed::nb_bits));
}

int Fixed::toInt(void) const
{
	return (value >> nb_bits);
}

int Fixed::min(int &ref_nb1, int &ref_nb2)
{

}

int Fixed::min_const(const int &ref_nb1, const int &ref_nb2)
{

}

int Fixed::max(int &ref_nb1, int &ref_nb2)
{

}

int Fixed::max_const(const int &ref_nb1, const int &ref_nb2)
{

}
