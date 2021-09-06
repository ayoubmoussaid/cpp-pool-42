/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:01:02 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 12:43:42 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){

};

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->type);
	return zombie;
}

void	ZombieEvent::randomChump()
{
	std::string  list[4] = {"Zombiie", "CraZyZ", "ZomZom", "ZOOOOMBIE"};
	srand(time(0));
	int index =  std::rand() % 4;

	Zombie zombie = Zombie(list[index], type);
	zombie.announce();
}
