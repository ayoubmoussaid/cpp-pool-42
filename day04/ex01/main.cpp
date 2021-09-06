/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:18:02 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/07 08:46:29 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete me;

	std::cout << "-----=======-----" << std::endl;

	Character other("other");

	Enemy* s = new SuperMutant();

	other.equip(pr);
	std::cout << other;
	other.equip(pf);
	std::cout << other;
	other.equip(NULL);
	std::cout << other;

	other.attack(s);
	other.equip(pf);
	std::cout << other;
	other.attack(s);
	std::cout << other;
	other.attack(s);
	std::cout << other;
	other.attack(s);
	std::cout << other;
	other.attack(s);
	std::cout << other;

	delete pr;
	delete pf;
	return 0;
}
