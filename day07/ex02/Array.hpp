/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:52:55 by amoussai          #+#    #+#             */
/*   Updated: 2021/09/04 11:52:19 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <class T>
class Array {
	private:
		unsigned int	size;
		T	*arr;
	public:
		Array<T>(){
			arr = new T[0]();
			size = 0;
		}
		Array<T>(unsigned int n){
			size = n;
			arr = new T[n]();
		}
		Array<T>(Array<T> &other){
			this->size = other.getSize();
			T *tmp = other.getArray();
			this->arr = new T[this->size];
			for(unsigned int i = 0; i < this->size; i++)
				this->arr[i] = tmp[i];
		}
		~Array<T>(){
			delete [] this->arr;
		}

		Array &operator=(Array<T> const &other){
			this->size = other.getSize();
			T *tmp = other.getArray();
			this->arr = new T[this->size];
			for(unsigned int i = 0; i < this->size; i++)
				this->arr[i] = tmp[i]; 
		}

		class IndexOutOfRangeException : public std::exception {
			virtual const char * what() const throw(){
				return "Index out of range";
			}
		};

		T &operator[](unsigned int idx){
			if(this->size <= idx)
				throw IndexOutOfRangeException();
			return arr[idx];
		}

		T *getArray(){
			return this->arr;
		}

		unsigned int getSize(){
			return this->size;
		}
		
};

#endif
