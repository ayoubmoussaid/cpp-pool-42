/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:39:27 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/12 09:35:51 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form *(*functionType) (std::string target);

class Intern
{
	// private:
	// 	Form *getShrubbery(std::string target);
	// 	Form *getRobotomy(std::string target);
	// 	Form *getPresidential(std::string target);
		
	public:
		Intern();
		Intern(Intern const &other);
		virtual ~Intern();

		Intern &operator=(Intern const &other);

		class InvalidRequest : public std::exception {
			virtual const char * what() const throw();
		};

		Form *makeForm(std::string name, std::string target);
};

#endif
