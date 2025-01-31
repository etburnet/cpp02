/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:47 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/31 13:24:48 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	nb_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &);
		Fixed(const int val);
		Fixed(const float val);
		Fixed& operator=(const Fixed&);
		int operator>=(const Fixed&);
		int operator<=(const Fixed&);
		int operator<(const Fixed&);
		int operator>(const Fixed&);
		int operator==(const Fixed&);
		int operator!=(const Fixed&);
		const Fixed operator+(const Fixed&);
		const Fixed operator-(const Fixed&);
		const Fixed operator*(const Fixed&);
		const Fixed operator/(const Fixed&);
		Fixed& operator--();
		Fixed& operator++();
		Fixed operator--(int);
		Fixed operator++(int);
		static Fixed& min(Fixed &ref_nb1, Fixed &ref_nb2);
		const static Fixed& min(const Fixed &ref_nb1, const Fixed &ref_nb2);
		static Fixed& max(Fixed &ref_nb1, Fixed &ref_nb2);
		const static Fixed& max(const Fixed &ref_nb1, const Fixed &ref_nb2);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream&os, const Fixed&);
