/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:44:03 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 08:49:37 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{}

Cure::Cure(Cure const &other):
	AMateria("cure")
{
	this->_xp = other._xp;
}

Cure::~Cure()
{}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
