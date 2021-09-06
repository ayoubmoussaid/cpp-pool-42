/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:42:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 08:52:35 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name):
	ClapTrap(name)
{
	std::cout << this->name << ": I am a ninja, new born ninja!" << std::endl;

	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other):
	ClapTrap(other.name)
{
	std::cout << this->name << ": ahaa, I am being made!" << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": aaah! the pain is unbearable .. DEATH"  << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at melee, causing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at range, causing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " hit a FRAGTRAP by a A SHOE!" << std::endl;
	trap.takeDamage(10);
}
void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << this->name << " hit a NinjaTrap by a A SHOE!" << std::endl;
	trap.takeDamage(10);
}
void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << this->name << " hit a ScavTrap by a A SHOE!" << std::endl;
	trap.takeDamage(10);
}
