/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 11:12:41 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/05 11:24:33 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>
int main()
{
	{
		std::cout << "tests with stack" << std::endl;
		std::cout << "*******************************" << std::endl;
		std::cout << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "this is top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "this is size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		std::cout << "this is top: " << mstack.top() << std::endl;
		std::cout << "this is size: " << mstack.size() << std::endl;
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << "===============================" << std::endl;

	{
		std::cout << "tests with List" << std::endl;
		std::cout << "*******************************" << std::endl;
		std::cout << std::endl;
		
		std::list<int> myList;
		myList.push_back(5);
		myList.push_back(17);
		std::cout << "this is top: " << myList.back() << std::endl;
		myList.pop_back();
		std::cout << "this is size: " << myList.size() << std::endl;
		myList.push_back(3);
		myList.push_back(5);
		myList.push_back(737);
		std::cout << "this is top: " << myList.back() << std::endl;
		std::cout << "this is size: " << myList.size() << std::endl;
		myList.push_back(0);
		std::list<int>::iterator it = myList.begin();
		std::list<int>::iterator ite = myList.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(myList);
	}
	return 0;
}
