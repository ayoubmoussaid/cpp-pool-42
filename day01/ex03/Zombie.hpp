/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:47:39 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 14:05:32 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>  
#include <time.h>
class Zombie {
	private:
		std::string name;
		std::string type;

	public:
		Zombie();
		Zombie(std::string name, std::string type);
		void	announce();
};

#endif
