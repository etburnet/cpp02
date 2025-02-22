/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:47 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/29 12:59:59 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	nb_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &);
		Fixed& operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};