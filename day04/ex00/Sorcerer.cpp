/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:11:37 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:43:19 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title):
	name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl; 
}

Sorcerer::Sorcerer(Sorcerer const &other):
	name(other.name), title(other.title)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl; 
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ",  is dead. Consequences will never be the same!" << std::endl; 
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->name = other.name;
	this->title = other.title;
	return (*this);
}

std::string Sorcerer::introduce() const
{
	std::stringstream ss;
	ss << "I am " << this->name << ", " << this->title << ", and I like ponies!" << std::endl;
	return ss.str();
}

void Sorcerer::polymorph(Victim const &victim) const 
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &value)
{
	out << value.introduce();
	return(out);
}
