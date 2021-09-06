/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:44:22 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:50:26 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21)
{};

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other):
	AWeapon(other)
{}

PlasmaRifle::~PlasmaRifle(){}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

void PlasmaRifle::attack() const 
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
