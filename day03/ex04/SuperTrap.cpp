/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:54:21 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 19:56:08 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name):
	ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << this->name << ": SuperTrap created." << std::endl;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	std::cout << this->maxHitPoints << " " << this->rangedAttackDamage  << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other):
	ClapTrap(other.name), NinjaTrap(name), FragTrap(name)
{
	std::cout << this->name << ": SuperTrap created." << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << ": SuperTrap destroyed."  << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{
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

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
