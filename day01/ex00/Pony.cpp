/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:56:35 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/01 16:17:11 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){}


void		Pony::set_name(std::string name){
	this->name = name;
}
std::string	Pony::get_name(){
	return this->name;
}

void		Pony::set_age(int age){
	this->age = age;
}
int			Pony::get_age(){
	return this->age;
}
void		Pony::print_info(){
	std::cout << "Pony's name: " << this->name << ", has age: " << this->age << "\n";
}
