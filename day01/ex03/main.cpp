/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:08:54 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/08 09:22:25 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde zombieHorde = ZombieHorde(7);
	zombieHorde.announce();
	return 0;
}
