/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:35:38 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 09:11:05 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
int main(void)
{
	srand(time(NULL));
	
	FragTrap *frag = new FragTrap("FragTrap");

	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->meleeAttack("CL4P-TP");
	frag->rangedAttack("CL4P-TP");
	frag->takeDamage(24);
	frag->beRepaired(50);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(125);
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");
	frag->vaulthunter_dot_exe("CL4P-TP");


	std::cout << "----============----" << std::endl;
	ScavTrap *scav = new ScavTrap("ScavTrap");

	scav->challengeNewcomer("CL4P-TP");
	scav->meleeAttack("CL4P-TP");
	scav->rangedAttack("CL4P-TP");
	scav->takeDamage(24);
	scav->beRepaired(50);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(125);
	scav->challengeNewcomer("CL4P-TP");
	scav->challengeNewcomer("CL4P-TP");
	scav->challengeNewcomer("CL4P-TP");
	scav->challengeNewcomer("CL4P-TP");


	std::cout << "----============----" << std::endl;
	NinjaTrap *ninja = new NinjaTrap("NinjaTrap");

	ninja->meleeAttack("CL4P-TP");
	ninja->rangedAttack("CL4P-TP");
	ninja->takeDamage(24);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*ninja);

	delete ninja;
	delete scav;
	delete frag;


	std::cout << "----============----" << std::endl;
	SuperTrap *super = new SuperTrap("SuperTrap");

	super->meleeAttack("CL4P-TP");
	super->rangedAttack("CL4P-TP");
	super->takeDamage(24);
	super->beRepaired(50);
	super->takeDamage(42);
	super->takeDamage(100);
	super->beRepaired(125);

	delete super;
	return (0);
}
