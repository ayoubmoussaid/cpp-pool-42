/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:50:54 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 12:00:58 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>
#include <string>  

class ZombieEvent {
	private:
		std::string type;
	
	public:
		ZombieEvent();
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump();
};

#endif
