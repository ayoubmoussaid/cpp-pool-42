/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:55:38 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/05 15:39:32 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H


# include <iostream>
# include <string>
# include <sstream>
# include "Victim.hpp"

class Peon : public Victim{
	public:
		Peon(std::string const &name);
		Peon(Peon const &other);
		virtual ~Peon();

		Peon &operator=(Peon const &other);

		void getPolymorphed() const;
};


#endif
