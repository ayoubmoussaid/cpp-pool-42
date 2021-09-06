/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:01:42 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 18:09:14 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>


class Enemy 
{
	protected:
		int hp;
		std::string type;
		
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &other);
		virtual ~Enemy();

		Enemy &operator=(Enemy const &other);

		std::string const &getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
