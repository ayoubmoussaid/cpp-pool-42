/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:32:12 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 18:20:04 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		PresidentialPardonForm();
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
		void execute(Bureaucrat const & executor) const;
};

#endif
