/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:14:06 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/05 09:32:44 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(int n) : n(n) {}

Span::Span(Span const &other) {
	*this = other;
}

Span &Span::operator=(Span const &other){
	this->arr = other.arr;
	this->n = other.n;
	return *this;
}

Span::~Span(){}

const char *Span::FullStorageException::what() const throw() {
	return "Storage is full";
};

const char *Span::NoSpanAvailableException::what() const throw() {
	return "There is no available span";
};

void	Span::addNumber(int const &nbr){
	if(this->arr.size() >= this->n)
		throw Span::FullStorageException();
	
	this->arr.insert
        ( 
            std::upper_bound( this->arr.begin(), this->arr.end(), nbr ),
            nbr
        );
	//this->arr.push_back(nbr); 
}
int		Span::shortestSpan(){
	if(this->arr.size() <= 1)
		throw Span::NoSpanAvailableException();

	int minspan = this->arr.back() - this->arr.front();
	for(unsigned long i = 0; i < this->arr.size() - 1; i++){
		int tmp = this->arr[i+1] - this->arr[i];
		if(tmp < minspan)
			minspan = tmp;
	}
	return minspan;
}

int		Span::longestSpan(){
	if(this->arr.size() <= 1)
		throw Span::NoSpanAvailableException();
	
	return this->arr.back() - this->arr.front();
}


