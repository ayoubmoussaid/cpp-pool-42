/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:40:13 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 17:44:08 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon 
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &other);
		virtual ~PlasmaRifle();

		PlasmaRifle &operator=(PlasmaRifle const &other);

		void attack() const;
};

#endif
