/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:46:29 by amoussai          #+#    #+#             */
/*   Updated: 2021/07/28 09:01:42 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <iostream>
#include <typeinfo>

Base * generate(void){
	srand( (unsigned) time(NULL));
	int rnd = rand() % 3;
	Base *obj;
	if(rnd == 0)
		obj = new A();
	else if(rnd == 1)
		obj = new B();
	else
		obj = new C();
	return obj;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*> (p);
	if(a != NULL)
	{
		std::cout << "A" << std::endl;
		return;
	}
	B *b = dynamic_cast<B*> (p);
	if(b != NULL)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C *c = dynamic_cast<C*> (p);
	if(c != NULL)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base& p){
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}catch(std::bad_cast e){}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}catch(std::bad_cast e){}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}catch(std::bad_cast e){}
}

int main(void)
{
	Base *base = generate();
	identify(base);
	identify(*base);
}
