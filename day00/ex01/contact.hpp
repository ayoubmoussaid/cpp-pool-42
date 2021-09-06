/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 09:33:38 by amoussai          #+#    #+#             */
/*   Updated: 2021/03/11 10:45:16 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
#define CONTACT

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		int	index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	
	public:
		Contact();
		void	add_contact(int index);
		void	print_table();
		void	print_full_contact();

	private:
		void	print_line(std::string str);
};

#endif
