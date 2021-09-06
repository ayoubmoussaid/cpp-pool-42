/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:54:59 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 21:09:23 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		int m_count;
		AMateria *materias[4];
	public:
		Character(std::string const &name);
		Character(Character const &other);
		virtual ~Character();

		Character &operator=(Character const &other);

		std::string const &getName(void) const;

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};


#endif
