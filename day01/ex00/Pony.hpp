/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:56:59 by amoussai          #+#    #+#             */
/*   Updated: 2021/03/13 15:04:16 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY
#define PONY
#include <iostream>
#include <string>  

class Pony {
	private:
		std::string name;
		int age;

	public:
		Pony();
		void		set_name(std::string name);
		std::string	get_name();
		void		set_age(int age);
		int			get_age();
		void		print_info();
};

#endif
