/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:07:01 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 17:39:49 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : 
	name(name), apcost(apcost), damage(damage)
{}

AWeapon::AWeapon(AWeapon const &other) : 
	name(other.name), apcost(other.apcost), damage(other.damage)
{}

AWeapon::~AWeapon(){}


AWeapon &AWeapon::operator=(AWeapon const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getAPCost() const 
{
	return this->apcost;
}

int AWeapon::getDamage() const 
{
	return this->damage;
}

void AWeapon::attack() const 
{
	std::cout << "*Sounds and lighting effects*" << std::endl;
}
