/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:02:40 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 17:53:41 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	 Form("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other.getName(), other.getSignGrade(), other.getExecuteGrade()), target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->target = other.target;
	this->isSigned = other.isSigned;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::cout << "* VVRRRRGGGGGG VVVVRRRRRRGGGGGGG (drilling noises)" << std::endl;
	srand(time(NULL));
	if((rand() % 100) > 50)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << "  has been pardoned by Zafod Beeblebrox." << std::endl;
}
