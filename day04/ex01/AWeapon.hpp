/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:02:56 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/09 18:04:32 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>
class AWeapon
{
	protected:
		AWeapon();
		std::string name;
		int apcost;
		int damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &other);
		virtual ~AWeapon();

		AWeapon &operator=(AWeapon const &other);
		
		std::string const &getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
