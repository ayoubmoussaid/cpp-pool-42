/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 13:19:01 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 14:36:09 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <class T>
bool	easyfind(T const &ctr, int const &value){
	return (find(ctr.begin(), ctr.end(), value) != ctr.end());
}


#endif
