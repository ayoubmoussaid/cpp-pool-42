/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:47:37 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 12:15:50 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type){
	this->name = name;
	this->type = type;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiinnnssss...\n";
}
