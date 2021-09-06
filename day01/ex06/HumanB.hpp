/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:51:03 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/07 15:18:20 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_BB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
