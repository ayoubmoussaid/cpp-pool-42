/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:32:12 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 17:52:07 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		ShrubberyCreationForm();
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
		void execute(Bureaucrat const & executor) const;
};

#endif
