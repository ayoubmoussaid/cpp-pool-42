/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:58:38 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/02 16:02:13 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string &ref = str;
	std::string *ptr = &str;

	std::cout << "pointer: " << *ptr << std::endl;
	std::cout << "reference: " << ref << std::endl;

	return (0);
}
