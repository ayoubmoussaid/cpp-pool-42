/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:42:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 07:34:40 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name):
	ClapTrap(name)
{
	std::cout << this->name << ": I am born, and FOREVER shall I live!" << std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &other):
	ClapTrap(other.name)
{
	std::cout << this->name << ":Wassup twin!" << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": I can see... the code! .. DEATH"  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at melee, causing "
			<< this->meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at range, causing "
			<< this->rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	static const int nb_challenges = 5;
	std::string challenges[nb_challenges] = {
		"What will he do next?",
		"Roses are red and/Violets are blue/Wait... how many syllables was that?",
		"Shoot him... he's the real one...",
		"Hack the planet!",
		"You're one screw short of a screw!"
	};

	std::cout << this->name << ": " << challenges[rand() % nb_challenges] << std::endl
				<< this->name << " challenges " << target << std::endl;


}
