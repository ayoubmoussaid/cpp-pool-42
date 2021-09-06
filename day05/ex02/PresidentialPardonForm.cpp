/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:02:40 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 17:53:41 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	Form(other.getName(), other.getSignGrade(), other.getExecuteGrade()), target(other.target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	this->target = other.target;
	this->isSigned = other.isSigned;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
