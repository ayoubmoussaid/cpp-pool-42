/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:48:50 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/07 15:23:18 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : name(name), weapon(club){}

void HumanA::attack(){
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
