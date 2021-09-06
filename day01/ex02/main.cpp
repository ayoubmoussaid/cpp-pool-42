/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:08:54 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 12:22:07 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent = ZombieEvent();

	zombieEvent.setZombieType("Brain Eater");
	Zombie *z = zombieEvent.newZombie("Brainy");
	std::cout << "A zombie with specified name: \n";
	z->announce();
	delete z;
	
	std::cout << "A zombie with random name: \n";
	zombieEvent.setZombieType("Killer");
	zombieEvent.randomChump();
	return 0;
}
