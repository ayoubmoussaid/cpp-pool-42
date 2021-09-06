/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:32:55 by amoussai          #+#    #+#             */
/*   Updated: 2021/07/27 17:55:10 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(std::string value){
	_value = value;
	//std::cout << "value: " << _value << std::endl;
	if(_value.empty())
		throw Converter::EmptyArgumentException();
	if(!isInfinity(_value))
	{
		if(_value.size() == 1 && isprint(_value[0]) && !isnumber(_value[0]))
		{
			std::stringstream ss;
			int n = static_cast<int>(_value[0]);
			ss << n;
			ss >> _value;
		}
		else
		{
			if(_value[_value.size() - 1] == 'f')
				_value = _value.substr(0, _value.size() - 1);
			std::string::size_type i = (_value[0] == '+' || _value[0] == '-') ? 1 : 0;
			if(_value[i] == '.')
				throw Converter::InvalidArgumentException();
			int pointCount = 0;
			while(i < _value.size())
			{
				if(_value[i] == '.')
					pointCount++;
				if((!isnumber(_value[i]) && _value[i] != '.') || pointCount > 1)
					throw Converter::InvalidArgumentException();
				i++;
			}
		}
	}
	doubleValue = atof(_value.c_str());
}

Converter::Converter(Converter const &other){
	this->_value = other._value;
	this->doubleValue = other.doubleValue;
}

Converter::~Converter(){

}

Converter &Converter::operator=(Converter const &other){
	this->_value = other._value;
	this->doubleValue = other.doubleValue;
	return (*this);
}

const char *Converter::EmptyArgumentException::what() const throw()
{
	return "Recieved Empty String as Argument";
}

const char *Converter::InvalidArgumentException::what() const throw()
{
	return "Invalid Argument";
}

void	Converter::toConv()
{
	toChar();
	toInt();
	toFloat();
	toDouble();
}

void	Converter::toChar()
{
	char x = static_cast<char>(doubleValue);
	std::cout << "char: ";
	if(isnan(doubleValue) || isinf(doubleValue) || (static_cast<int>(doubleValue) > std::numeric_limits<char>::max() || static_cast<int>(doubleValue) < std::numeric_limits<char>::min()))
		std::cout << "impossible";
	else if(isprint(x))
		std::cout << "'" << x << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void Converter::toInt()
{
	int x = static_cast<int>(doubleValue);
	std::cout << "int: ";
	if(isnan(doubleValue) || isinf(doubleValue) || 
	(static_cast<long>(doubleValue) > std::numeric_limits<int>::max() ||
	static_cast<long>(doubleValue) < std::numeric_limits<int>::min()))
		std::cout << "impossible";
	else
		std::cout << x;
	std::cout << std::endl;
}

void Converter::toFloat()
{
	float x = static_cast<float>(doubleValue);
	std::cout << "float: ";
	if(isnan(doubleValue))
		std::cout << "nanf";
	else if(isinf(doubleValue))
	{
		if(doubleValue < 0)
			std::cout << "-";
		else
			std::cout << "+";
		std::cout << "inff";
	}
	else
	{
		x = static_cast<float>(doubleValue);
		std::cout.precision(getPrecision());
		std::cout.setf( std::ios::fixed, std:: ios::floatfield);
		std::cout << x << "f";
	}
	std::cout <<std::endl;
}

void Converter::toDouble()
{
	std::cout << "double: ";
	if(isnan(doubleValue))
		std::cout << "nan";
	else if (isinf(doubleValue))
	{
		if(doubleValue < 0)
			std::cout << "-";
		else
			std::cout << "+";
		std::cout << "inf";
	}
	else
	{
		double d = static_cast<double>(doubleValue);
		std::cout.precision(getPrecision());
		std::cout.setf( std::ios::fixed, std:: ios::floatfield);
		std::cout << d;
	}
	std::cout << std::endl;
}

int			Converter::getPrecision()
{
	size_t i;
	int precision;

	precision = 1;
	if ((i = this->_value.find_first_of('.')) != std::string::npos && i != this->_value.length() - 1)
	{
		precision--;
		for (++i; i < _value.length() && isdigit(_value[i]); i++)
			++precision;
	}
	return precision;
}

bool Converter::isInfinity(std::string val){
	std::string inf[6] = {"nan", "nanf", "-inf", "-inff", "+inf", "+inff"};
	for(int i = 0; i < 6 ; i++)
	{
		if(val == inf[i])
			return true;
	}
	return false;
}
