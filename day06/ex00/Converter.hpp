/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:20:59 by amoussai          #+#    #+#             */
/*   Updated: 2021/07/27 17:57:15 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <exception>

class Converter
{
	private:
		Converter();
		double	doubleValue;
		std::string	_value;
		bool	isInfinity(std::string val);
		void	toChar();
		void	toInt();
		void	toDouble();
		void	toFloat();
		int		getPrecision();
	public:
		Converter(std::string value);
		Converter(Converter const &other);
		virtual ~Converter();

		Converter &operator=(Converter const &other);
		
		class EmptyArgumentException : public std::exception {
			virtual const char * what() const throw();
		};
		
		class InvalidArgumentException : public std::exception {
			virtual const char * what() const throw();
		};

		void	toConv();
};

#endif
