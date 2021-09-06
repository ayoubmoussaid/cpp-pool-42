/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:57:16 by amoussai          #+#    #+#             */
/*   Updated: 2021/07/25 18:15:27 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char const *argv[])
{
	if(argc != 2){
		std::cout << "Incorrect number of arguments" << std::endl;
		return 1;
	}
	try {
		Converter conv(argv[1]);
		conv.toConv();
	}catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
