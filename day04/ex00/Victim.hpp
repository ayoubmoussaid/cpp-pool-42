/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:34:39 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:39:28 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H


# include <iostream>
# include <string>
# include <sstream>

class Victim {
	protected:
		std::string name;
	public:
		Victim(std::string const &name);
		Victim(Victim const &other);
		virtual ~Victim();

		Victim &operator=(Victim const &other);
	
		std::string	introduce() const;
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &value);

#endif
