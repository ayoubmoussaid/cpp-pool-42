/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 07:38:14 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 07:47:57 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
