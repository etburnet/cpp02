/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:37:47 by eburnet           #+#    #+#             */
/*   Updated: 2025/01/29 16:40:48 by eburnet          ###   ########.fr       */
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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream&os, const Fixed&);

/* • Une surcharge de l’opérateur d’insertion («) qui 

insère une représentation en virgule flottante 
du nombre à virgule fixe 
dans le flux de sortie 

(objet output stream) passé en paramètre. */