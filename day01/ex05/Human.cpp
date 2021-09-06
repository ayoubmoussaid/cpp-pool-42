/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:14:40 by amoussai          #+#    #+#             */
/*   Updated: 2021/05/03 16:24:39 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify() const {
	return (this->brain.identify());
}


Brain const & Human::getBrain() const {
	return this->brain;
}
