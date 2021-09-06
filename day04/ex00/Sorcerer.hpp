/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:05:51 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:16:34 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_H
# define SORCERER_H


# include <iostream>
# include <string>
# include <sstream>
# include "Victim.hpp"
class Sorcerer {
	private:
		std::string name;
		std::string title;
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &other);
		~Sorcerer();

		Sorcerer &operator=(Sorcerer const &other);

		std::string	introduce() const;
		void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &value);

#endif
