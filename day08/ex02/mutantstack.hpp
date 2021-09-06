/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:25:28 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/05 11:28:43 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HPPMUTANTSTACK
#define _HPPMUTANTSTACK

#include <stack>

template<class T>
class MutantStack : public std::stack< T >{
	public:
		MutantStack<T>() : std::stack<T>() {}

		MutantStack<T>(MutantStack<T> const &other) : std::stack<T>(other){}

		virtual ~MutantStack<T>(){}

		MutantStack<T> &operator=(MutantStack<T> const &other){
			if (this != &other)
				this->std::stack<T>::operator=(other);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin() {
			return std::stack<T>::c.begin();
		}

		const_iterator begin() const {
			return std::stack<T>::c.begin();
		}

		iterator end() {
			return std::stack<T>::c.end();
		}

		const_iterator end() const {
			return std::stack<T>::c.end();
		}

		reverse_iterator rbegin() {
			return std::stack<T>::c.rbegin();
		}

		const_reverse_iterator rbegin() const {
			return std::stack<T>::c.rbegin();
		}

		reverse_iterator rend() {
			return std::stack<T>::c.rend();
		}

		const_reverse_iterator rend() const {
			return std::stack<T>::c.rend();
		}
	
};

#endif /* _HPPMUTANTSTACK */
