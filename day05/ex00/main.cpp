/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 08:14:56 by amoussai          #+#    #+#             */
/*   Updated: 2021/06/10 08:25:42 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	
	return (0);
}
