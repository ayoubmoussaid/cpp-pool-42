/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:14:56 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/12 09:42:47 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern somerandomIntern;
	try
	{
		Bureaucrat b1("Samuel", 5);
		std::cout << b1;
		//Bureaucrat b2("Alex", 0);
		//std::cout << b2;
		Bureaucrat b3("Swifty", 150);
		std::cout << b3;
		//Bureaucrat b4("Crazy", 151);
		//std::cout << b4;
		Bureaucrat b5("Phantom", 2);
		std::cout << b5;
		b5.incrementGrade();
		std::cout << b5;
		b5.incrementGrade();
		std::cout << b5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----===============----" << std::endl;
	try 
	{
		Bureaucrat b1("Samuel", 5);
		Form f1("form-1", 10, 30);
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
		
		
		Bureaucrat b2("Alex", 20);
		Form f2("form-2", 10, 30);
		std::cout << f2;
		b2.signForm(f2);
		std::cout << f2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-=-=-=-==-=-==-=-=-=-==-" <<std::endl;
	try 
	{
		
		Bureaucrat b1("Samuel", 5);
		Form *f1 = somerandomIntern.makeForm("shrubbery request", "The target");
		std::cout << *f1;
		b1.signForm(*f1);
		//f1->execute(b1);
		std::cout << *f1;
		b1.signForm(*f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-=-=-=-==-=-==-=-=-=-==-" <<std::endl;
	try 
	{
		Bureaucrat b2("Swifty", 5);
		Form *f2 = somerandomIntern.makeForm("robotomy request", "The target");
		std::cout << *f2;
		b2.signForm(*f2);
		//f2->execute(b2);
		std::cout << *f2;
		b2.signForm(*f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-=-=-=-==-=-==-=-=-=-==-" <<std::endl;
	try 
	{
		Bureaucrat b3("lastttyy", 5);
		Form *f3 = somerandomIntern.makeForm("presidential request", "The target");
		std::cout << *f3;
		b3.signForm(*f3);
		//f3->execute(b3);
		std::cout << *f3;
		b3.signForm(*f3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
