/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:32:12 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 18:19:36 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>

#include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		RobotomyRequestForm();
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
		void execute(Bureaucrat const & executor) const;
};

#endif
