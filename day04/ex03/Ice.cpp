/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:44:03 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 08:47:25 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{}

Ice::Ice(Ice const &other):
	AMateria("ice")
{
	this->_xp = other._xp;
}

Ice::~Ice()
{}

Ice &Ice::operator=(Ice const &other)
{
	this->_xp = other._xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
