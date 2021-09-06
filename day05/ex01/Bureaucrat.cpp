/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:46:24 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 18:40:15 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name(other.name), grade(other.grade)
{
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high Exception";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low Exception";
}

std::string const &Bureaucrat::getName() const 
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
	if(form.isItSigned())
		std::cout << this->name << " cannot sign " << form.getName() << " because it is already signed!" << std::endl;
	else if (this->grade > form.getSignGrade())
		std::cout << this->name << " cannot sign " << form.getName() << " because it has a low grade!" << std::endl;
	else
		std::cout << this->name << " signs " << form.getName() << std::endl;
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &value)
{
    out << value.getName() << " bureaucrat grade " << value.getGrade() << std::endl;
    return (out);
}
