/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:01:15 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:33:31 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name):
	Victim(name)
{
	std::cout << "Zog zog."<< std::endl; 
}

Peon::Peon(Peon const &other):
	Victim(other.name)
{
	std::cout << "Zog zog" << std::endl; 
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl; 
}

Peon &Peon::operator=(Peon const &other)
{
	this->name = other.name;
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << "  has been turned into a pink pony!" << std::endl;
}
