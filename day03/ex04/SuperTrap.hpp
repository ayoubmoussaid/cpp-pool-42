/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:54:19 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 19:47:02 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
private:
	SuperTrap();

public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &other);
	virtual ~SuperTrap();

	SuperTrap &operator=(SuperTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
};

#endif
