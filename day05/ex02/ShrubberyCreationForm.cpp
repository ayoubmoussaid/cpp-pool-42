/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:02:40 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 19:17:23 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other.getName(), other.getSignGrade(), other.getExecuteGrade()), target(other.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->target = other.target;
	this->isSigned = other.isSigned;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::string trees[2] = {
"       _-_\n" \
"    /~~   ~~\\\n" \
" /~~         ~~\\\n" \
"{               \\}\n" \
" \\  _-     -_  /\n" \
"   ~  \\ //  ~\n" \
"_- -   | | _- _\n" \
"  _ -  | |   -_\n" \
"      // \\\n" ,

"       ###\n" \
"      #o###\n" \
"    #####o###\n" \
"   #o#\\#|#/###\n" \
"    ###\\|/#o#\n" \
"     # }|{  #\n" \
"       }|{\n",
	};
	std::string filename = this->target + "_shrubbery";
	std::ofstream out(filename);
	out << trees[0];
	out << "\n\n";
	out << trees[1];
	out.close();
}
