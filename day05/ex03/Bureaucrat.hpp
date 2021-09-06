/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:37:57 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 18:41:13 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &other);

		class GradeTooHighException : public std::exception {
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char * what() const throw();
		};

		std::string const &getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form &form);
		void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &value);

#endif
