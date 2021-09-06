/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 07:38:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:46:57 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{	
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &other);
		virtual ~SuperMutant();

		SuperMutant &operator=(SuperMutant const &other);
		void takeDamage(int);
};

#endif
