/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:43:24 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/12 09:36:26 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern::~Intern()
{}

const char *Intern::InvalidRequest::what() const throw()
{
	return "Your request is invalid!";
}

Form *getShrubbery(std::string target)
{
	ShrubberyCreationForm *shrub = new ShrubberyCreationForm(target);
	return shrub;
}

Form *getRobotomy(std::string target)
{
	RobotomyRequestForm *robot = new RobotomyRequestForm(target);
	return robot;
}

Form *getPresidential(std::string target)
{
	PresidentialPardonForm *president = new PresidentialPardonForm(target);
	return president;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	static Form* (*func[3])(std::string target) = {getShrubbery, getRobotomy, getPresidential};
	static std::string functions[3] = {"shrubbery request", "robotomy request", "presidential request"};
	for(int i = 0; i < 3; i++)
	{
		if (functions[i].compare(name) == 0)
		{
			Form *form = func[i](target);
			std::cout << "Intern creates " << *form << std::endl;
			return form;
		}
	}
	throw Intern::InvalidRequest();
}
