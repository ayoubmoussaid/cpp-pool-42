/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:18:15 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 21:06:41 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): pos(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &other): pos(0)
{
	for (int i = 0; i < other.pos; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->pos; i++)
		delete this->sources[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->pos; i++)
		delete this->sources[i];
	this->pos = 0;
	for (int i = 0; i < other.pos; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->pos  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->pos; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->pos++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->pos; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (nullptr);
}
