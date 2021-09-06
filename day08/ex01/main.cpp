/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:14:01 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/05 10:14:21 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	Span sp1 = Span(5);
	sp1.addNumber(5);
	sp1.addNumber(10);
	sp1.addNumber(21);
	sp1.addNumber(27);
	sp1.addNumber(16);
	
	try{
		sp1.addNumber(6);
	}catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	Span sp2 = Span(10000);
	std::vector<int> myVector;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10000; i++){
		int b = rand() % 10000 + 1;
		myVector.push_back(b);
	}
	std::cout << std::endl;
	sp2.addNumbers(myVector.begin(), myVector.end());
	try{
		sp2.addNumber(6);
	}catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
