/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:32:12 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 16:30:57 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		Form();
		std::string const name;
		int const signGrade;
		int const executeGrade;
		bool isSigned;
	public:
		Form(std::string name, int signGrade, int  executeGrade);
		Form(Form const &other);
		virtual ~Form();

		Form &operator=(Form const &other);

		class GradeTooHighException : public std::exception {
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char * what() const throw();
		};

		std::string const getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool isItSigned() const;

		void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form const &value);


#endif
