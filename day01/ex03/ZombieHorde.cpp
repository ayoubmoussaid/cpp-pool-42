/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:01:02 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/08 09:23:05 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int  N){
	srand(time(0));
	if (N < 0)
		N = 0;
	this->zombies = new Zombie[N];
	this->nbZombies = N;
};

ZombieHorde::~ZombieHorde(){
	std::cout << "Zombies are dieing" << std::endl;
	delete[] this->zombies;
}

void 	ZombieHorde::announce(){
	int i;

	i = 0;
	while(i < this->nbZombies)
		zombies[i++].announce();
}

