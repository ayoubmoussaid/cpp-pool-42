/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:39:06 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 08:39:36 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const &type):
	_type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
