/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:37:55 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:18:30 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name):
	name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl; 
}

Victim::Victim(Victim const &other):
	name(other.name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl; 
}

Victim::~Victim()
{
	std::cout << "Victim " <<this->name << " just died for no apparent reason!" << std::endl; 
}

Victim &Victim::operator=(Victim const &other)
{
	this->name = other.name;
	return (*this);
}

std::string Victim::introduce() const
{
	std::stringstream ss;
	ss << "I'm " << this->name << " and I like otters!" << std::endl;
	return ss.str();
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << "  has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &value)
{
	out << value.introduce();
	return(out);
}
