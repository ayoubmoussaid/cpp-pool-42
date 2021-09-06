/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:41:51 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 07:44:03 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	ClapTrap();

	std::string name;
	int level;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap();

	ClapTrap &operator=(ClapTrap const &other);

	virtual void meleeAttack(std::string const &target);
	virtual void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
