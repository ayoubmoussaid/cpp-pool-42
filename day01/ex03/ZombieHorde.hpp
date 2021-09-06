/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:50:54 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/08 09:21:47 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>
#include <string>  

class ZombieHorde {
	private:
		Zombie *zombies;
		int		nbZombies;
	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce();
};

#endif
