/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:39:27 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array{
	public:
		Array<T>(void) : _size(0)
		{
			std::cout << BWHT <<  "Empty Array" << std::endl<< std::endl << RESET;
			_tab = new T[0];
		};
		Array<T> (unsigned int n) : _size(n)
		{
			std::cout << BWHT <<  "Array" << std::endl<< std::endl << RESET;
			_tab = new T[n];
		};
		Array<T> (Array const & src)
		{
			std::cout << BWHT <<  "Array by copy" << std::endl<< std::endl << RESET;
			*this = src;
			_size = src._size;
			_tab = new T[src._size];
			for (unsigned int i = 0; i < _size ; i++)
				_tab[i] = src._tab[i];
			return;
		};
		~Array<T>(void) {
			delete [] _tab;
		};
		
		T &operator[](unsigned int index)
		{
			if (index >= _size)
			{
				throw InvalidIndex();
			}
			return _tab[index];
		};
			
		T &operator=(T const & rhs)
		{
			if (this == &rhs)
				return (*this);
			if (_size != rhs._size)
			{
				delete [] _tab;
				_size = rhs._size;
				_tab = new T[rhs._size];
			}
			for (int i = 0; i < _size; i++)
			{
				rhs._tab[i] = _tab[i];
			}
			return (*this);
		};
		
		class InvalidIndex:public std::exception
		{
		public:
			virtual const char *what() const throw()
			{
				return ("Array::InvalidIndex");
			}
		};
		
		unsigned int	size()
		{
			return (_size);
		}

	private:
		unsigned int	_size;
		T *_tab;
};


#endif
