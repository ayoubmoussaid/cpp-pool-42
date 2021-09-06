/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:38:57 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 07:44:12 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int count;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &other);
	virtual ~Squad();

	Squad &operator=(Squad const &other);

	int getCount(void) const;
	ISpaceMarine *getUnit(int pos) const;

	int push(ISpaceMarine *unit);
};


#endif
