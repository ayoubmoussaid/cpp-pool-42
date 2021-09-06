/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:42:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 07:47:37 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name):
	name(name)
{
	std::cout << this->name << ": ClapTrap created." << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 100;
	this->rangedAttackDamage = 100;
	this->armorDamageReduction = 100;
}

ClapTrap::ClapTrap(ClapTrap const &other):
	name(other.name)
{
	std::cout << this->name << ": ClapTrap created." << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << ": ClapTrap destroyed."  << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at melee, causing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at range, causing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int dealt = (amount < this->armorDamageReduction) ? 0 : amount - this->armorDamageReduction;
	this->hitPoints -= dealt;
	if (this->hitPoints < 0)
	{
		dealt += this->hitPoints;
		this->hitPoints = 0;
	}
	std::cout << this->name << " took "
			<< dealt << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int healed = amount;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
	{
		healed -= (this->hitPoints - this->maxHitPoints);
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << this->name << " is repaired for "
			<< healed << "!" << std::endl;
}
