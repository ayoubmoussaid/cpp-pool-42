/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:57:08 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 08:24:00 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : 
	name(name)
{
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(Character const &other) : 
	name(other.name)
{
	this->ap = other.ap;
	this->weapon = other.weapon;
}

Character::~Character(){}


Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
	return (*this);
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::recoverAP()
{
	this->ap += 10;
	if(this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if(this->weapon == NULL)
		return ;
	this->ap -= this->weapon->getAPCost();
	if(this->ap < 0)
	{
		this->ap = 0;
		return ;
	}
	enemy->takeDamage(this->weapon->getDamage());
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName()  << std::endl;
	this->weapon->attack();
	if (enemy->getHP() == 0)
		delete enemy;
}

int Character::getAp() const 
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &value)
{
	if(value.getWeapon() == NULL)
		out << value.getName() << " has " << value.getAp() << " and is unarmed" << std::endl;
	else
		out << value.getName() << " has " << value.getAp() << " and wields a " << value.getWeapon()->getName() << std::endl;
	return (out);
}
