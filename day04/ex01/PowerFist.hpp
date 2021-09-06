/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:59:39 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 18:00:03 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon 
{
	public:
		PowerFist();
		PowerFist(PowerFist const &other);
		virtual ~PowerFist();

		PowerFist &operator=(PowerFist const &other);

		void attack() const;
};

#endif
