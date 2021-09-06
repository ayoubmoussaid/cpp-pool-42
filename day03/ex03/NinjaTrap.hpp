/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 08:08:41 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 08:10:56 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class NinjaTrap: virtual public ClapTrap
{
private:
	NinjaTrap();

public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	virtual ~NinjaTrap();

	NinjaTrap &operator=(NinjaTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
};

#endif
