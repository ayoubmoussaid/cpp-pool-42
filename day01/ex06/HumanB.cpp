/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:51:52 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/07 15:23:12 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
