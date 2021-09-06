/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 15:14:26 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:44:37 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "----==============----" << std::endl;
	Sorcerer bad(robert);
	Victim jessy(jim);
	Peon joey(joe);

	bad = robert;
	std::cout << bad << jessy << joey;
	bad.polymorph(jessy);
	bad.polymorph(joey);
	std::cout << "----==============----" << std::endl;
	return 0;
}
