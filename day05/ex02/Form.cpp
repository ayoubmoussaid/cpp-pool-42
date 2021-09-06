/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:54:19 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/12 10:33:25 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if(this->signGrade < 1)
		throw Form::GradeTooHighException();
	if(this->signGrade > 150)
		throw Form::GradeTooLowException();
	if(this->executeGrade < 1)
		throw Form::GradeTooHighException();
	if(this->executeGrade > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

Form::Form(Form const &other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade),isSigned(other.isSigned)
{
	if(this->signGrade < 1)
		throw Form::GradeTooHighException();
	if(this->signGrade > 150)
		throw Form::GradeTooLowException();
	if(this->executeGrade < 1)
		throw Form::GradeTooHighException();
	if(this->executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{}

Form &Form::operator=(Form const &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low Exception";
}
const char *Form::FormNotSignedException::what() const throw()
{
	return "Form not signed yet";
}

std::string const Form::getName() const
{
	return this->name;
}

int Form::getSignGrade() const
{
	return this->signGrade;
}

int Form::getExecuteGrade() const
{
	return this->executeGrade;
}

bool Form::isItSigned() const 
{
	return this->isSigned;
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if(bureaucrat.getGrade() > this->getSignGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if(!this->isSigned)
		throw Form::FormNotSignedException();
	if(executor.getGrade() > this->executeGrade)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &value)
{
    out << value.getName() << " Form sign grade: " << value.getSignGrade() << ", execute grade: " << value.getExecuteGrade() << ", is it signed => " << value.isItSigned() << std::endl;
    return (out);
}
