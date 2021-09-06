/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:11:10 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/05 09:32:23 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span {
	private:
		Span();
		unsigned int		n;
		std::vector<int>	arr;
	public:
		Span(int n);
		Span(Span const &other);
		~Span();

		Span &operator=(Span const &other);

		void	addNumber(int const &nbr);
		int		shortestSpan();
		int		longestSpan();
		
		template<class InputIterator>
		void	addNumbers(InputIterator first, InputIterator last){
			if(this->arr.size() >= this->n)
				throw FullStorageException();
			
			for(;first != last; first++)
			{
				addNumber(*first);
			}
		}

		class FullStorageException : public std::exception {
			virtual const char * what() const throw();
		};
		
		class NoSpanAvailableException : public std::exception {
			virtual const char * what() const throw();
		};
};

#endif
