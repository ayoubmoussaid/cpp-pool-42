/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:42:07 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 15:08:08 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
int main(void){

	//Vector tests
	std::vector<int> v;
	for (int i = 1; i <= 5; i++)
        v.push_back(i);

	if(easyfind(v, 4))
		std::cout << "The value is found" << std::endl;
	else
		std::cout << "The value is not found" << std::endl;


	if(easyfind(v, 10))
		std::cout << "The value is found" << std::endl;
	else
		std::cout << "The value is not found" << std::endl;

	//Lists tests

	std::list<int> l;

	for(int i = 1; i <= 5; i++)
		l.push_back(i);

	if(easyfind(l, 4))
		std::cout << "The value is found" << std::endl;
	else
		std::cout << "The value is not found" << std::endl;


	if(easyfind(l, 10))
		std::cout << "The value is found" << std::endl;
	else
		std::cout << "The value is not found" << std::endl;
	return 0;
}
