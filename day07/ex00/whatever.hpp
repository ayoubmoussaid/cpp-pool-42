/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:57:25 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 10:15:20 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
void 	swap(T &a, T &b){
	T tmp(a);
	a = b;
	b = tmp;
}

template <class T>
T min(T a, T b){
	return (a < b ? a : b);
}

template <class T>
T max(T a, T b){
	return (a > b ? a : b);
}

// class Awesome {
// 	public:
// 		Awesome( int n ) : _n( n ) {}
// 		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		int getValue() const {return this->_n;};
// 	private:
// 		int _n;
// };


#endif 
