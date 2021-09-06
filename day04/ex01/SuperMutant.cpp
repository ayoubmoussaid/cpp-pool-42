/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:41:33 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:51:26 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(other)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if( damage >= 0)
	{
		int newhp = this->hp - damage;
		this->hp = (newhp < 0) ? 0 : newhp;
	}
}
