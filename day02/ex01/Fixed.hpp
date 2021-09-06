/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:07:29 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/03 08:18:00 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &other);
	~Fixed();

	Fixed &operator=(Fixed const &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
