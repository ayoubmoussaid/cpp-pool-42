/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:14:56 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/12 10:40:30 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
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
		f1.beSigned(b1);
		std::cout << f1;
		
		
		Bureaucrat b2("Alex", 20);
		Form f2("form-2", 15, 30);
		std::cout << f2;
		f2.beSigned(b2);
		std::cout << f2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
