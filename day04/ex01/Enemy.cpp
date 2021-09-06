/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:11:11 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 07:37:23 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : hp(hp) , type(type)
{}

Enemy::Enemy(Enemy const &other) : hp(other.hp), type(other.type)
{}

Enemy::~Enemy(){}

Enemy &Enemy::operator=(Enemy const &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

std::string const &Enemy::getType() const 
{
	return this->type;
}

int Enemy::getHP() const 
{
	return this->hp;
}

void Enemy::takeDamage(int damage)
{
	if( damage >= 0)
	{
		int newhp = this->hp - damage;
		this->hp = (newhp < 0) ? 0 : newhp;
	}
}
