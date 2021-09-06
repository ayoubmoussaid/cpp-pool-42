/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:49:13 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:51:38 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other) : Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	if( damage >= 0)
	{
		int newhp = this->hp - damage;
		this->hp = (newhp < 0) ? 0 : newhp;
	}
}
