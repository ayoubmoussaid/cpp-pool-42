/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:45:52 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:47:15 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &other);
		virtual ~RadScorpion();

		RadScorpion &operator=(RadScorpion const &other);
		void takeDamage(int);
};

#endif
