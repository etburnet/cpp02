/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:47 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/30 15:04:25 by eburnet          ###   ########.fr       */
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
		const Fixed& operator+(const Fixed&);
		const Fixed& operator-(const Fixed&);
		Fixed& operator*(const Fixed&);
		Fixed& operator/(const Fixed&);
		int operator--();
		int operator++();
		int operator--(int);
		int operator++(int);
		int min(int &ref_nb1, int &ref_nb2);
		int min_const(const int &ref_nb1, const int &ref_nb2);
		int max(int &ref_nb1, int &ref_nb2);
		int max_const(const int &ref_nb1, const int &ref_nb2);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream&os, const Fixed&);
