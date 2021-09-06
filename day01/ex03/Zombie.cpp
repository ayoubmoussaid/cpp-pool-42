/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:47:37 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 15:02:11 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::string  list[7] = {"Zombiie", "CraZyZ", "ZomZom", "ZOOOOMBIE", "Rainbow", "Bucky", "AWM"};
	int index =  std::rand() % 7;
	this->name = list[index];
	this->type = "No Type";
}

Zombie::Zombie(std::string name, std::string type){
	this->name = name;
	this->type = type;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiiinnnssss...\n";
}
