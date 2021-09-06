/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:00:04 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:50:32 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50)
{};

PowerFist::PowerFist(PowerFist const &other):
	AWeapon(other)
{}

PowerFist::~PowerFist(){}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

void PowerFist::attack() const 
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
