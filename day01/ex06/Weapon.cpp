/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:45:28 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/07 15:16:32 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
}

const std::string & Weapon::getType() {
	return this->type;
}

void	Weapon::setType(std::string type){
	this->type = type;
}
