/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:07:36 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 08:18:16 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &other);
	virtual ~AssaultTerminator();

	AssaultTerminator &operator=(AssaultTerminator const &other);

	ISpaceMarine *clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};


#endif
