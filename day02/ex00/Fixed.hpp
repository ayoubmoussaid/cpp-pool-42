/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:07:29 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/03 08:11:03 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	Fixed(Fixed const &second);
	~Fixed();

	Fixed &operator=(Fixed const &second);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
