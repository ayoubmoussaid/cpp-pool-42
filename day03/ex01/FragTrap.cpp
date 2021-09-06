/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:42:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/04 08:19:50 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name):
	name(name)
{
	std::cout << this->name << ": Hey! Over here! I'm over heere!" << std::endl;
	this->level = 1;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const &other):
	name(other.name)
{
	std::cout << this->name << ": Hey, best friend!" << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere! .. DEATH"  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at melee, causing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at range, causing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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
	std::cout << this->name << ": Good as new, I think. Am I leaking?" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static const int nb_attacks = 5;
	std::string attacks[nb_attacks] = {
		"It's time for party! Boom",
		"Funny, you die too easily! FIGHT ME LIKE A MAN",
		"YOU GET A BULLET! AND YOU GET A BULLET! EVERYONE GETS A BULLET!",
		"I AM THE SHADOWS! I AM EVERYWHERE!",
		"TAKE A NAP! HAHA, FOREVER"
	};
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": " << attacks[rand() % nb_attacks] << std::endl
				<< this->name << " attacks " << target << " for " << ((rand() % this->meleeAttackDamage) + 1)
				<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name
				<< " is out of energy!" << std::endl;
	}
}
