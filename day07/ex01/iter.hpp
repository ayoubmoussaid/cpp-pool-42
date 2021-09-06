/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:22:09 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 10:22:34 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <class T>
void iter(T *arr, int len, void (*function)(T const &elem)){
	for(int i = 0; i < len; i++){
		function(arr[i]);
	}
}

template<class T>
void printelem(T const &elem){
	std::cout << "elem is: " << elem << std::endl;
}


#endif
