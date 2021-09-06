/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:00:52 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/08 21:06:06 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
		int pos;
		AMateria *sources[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		virtual ~MateriaSource();

		MateriaSource &operator=(MateriaSource const &other);
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};



#endif
