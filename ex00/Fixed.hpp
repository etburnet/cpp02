/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:47 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/22 14:56:14 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	nb_bits;
	public:
		Fixed();
		~Fixed();
		int getRawBits(void);
		void setRawBits(int const raw);
};

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
