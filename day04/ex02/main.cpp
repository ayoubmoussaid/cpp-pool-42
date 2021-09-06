/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:16:04 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 08:29:27 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* alex = new TacticalMarine;
	ISpaceMarine* senpai = new AssaultTerminator;
	ISpaceMarine* okay = senpai->clone();
	ISpaceMarine* notokay = alex->clone();
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(senpai);
	vlc->push(alex);
	vlc->push(okay);
	vlc->push(notokay);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
