/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:22 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/03 11:36:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

/* 	std::cout << Fixed::min( a, b ) << std::endl;
	Fixed c;
	c = a;
	if (c >= a)
		std::cout << "VRAI" << std::endl;
	else
		std::cout << "FAUX" << std::endl;
	std::cout << c << std::endl;
	c = c + b;
	std::cout << c << std::endl;
	c = c - b;
	std::cout << c << std::endl; */
	return 0;
}