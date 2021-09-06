/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:22:52 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 10:24:06 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERASOURCE_HPP
#define IMATERASOURCE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};



#endif
