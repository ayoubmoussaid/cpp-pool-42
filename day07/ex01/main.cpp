/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:36:11 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 10:27:57 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void){

	int arr1[3] = {5, 9, 8};
	std::string arr2[3] = {"ayoub", "khalid", "alex"};

	std::cout << "array 1:" << std::endl;
	iter(arr1, 3, &printelem);
	std::cout << "array 2:" << std::endl;
	iter(arr2, 3, &printelem);
	return (0);
}

