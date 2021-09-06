/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:52:24 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 08:17:25 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"


class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
	public:
		Character(std::string const & name);
		Character(Character const &other);
		virtual ~Character();

		Character &operator=(Character const &other);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const &getName() const;
		int getAp() const ;
		AWeapon	*getWeapon() const ;
};

std::ostream &operator<<(std::ostream &out, Character const &value);

#endif
