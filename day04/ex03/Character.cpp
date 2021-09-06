/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:59:22 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 09:06:07 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
	name(name), m_count(0)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
}

Character::Character(Character const &other):
	name(other.name), m_count(0)
{
	for (int i = 0; i < other.m_count; i++)
		this->equip(other.materias[i]->clone());
	for (int i = this->m_count; i < 4; i++)
		this->materias[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->m_count; i++)
		delete this->materias[i];
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->m_count; i++)
		delete this->materias[i];
	this->m_count = 0;
	for (int i = 0; i < other.m_count; i++)
		this->equip(other.materias[i]->clone());
	for (int i = this->m_count; i < 4; i++)
		this->materias[i] = nullptr;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->m_count == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->m_count; i++)
		if (this->materias[i] == m)
			return ;
	this->materias[this->m_count++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->m_count || this->materias[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->materias[i] = this->materias[i + 1];
		this->materias[i + 1] = nullptr;
	}
	this->m_count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->m_count || this->materias[idx] == nullptr)
		return ;
	this->materias[idx]->use(target);
}
