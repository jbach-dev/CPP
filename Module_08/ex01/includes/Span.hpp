/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 14:38:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

class Span{
	public:
		Span(void) : _size(0)
		{
			std::cout << "Empty Span" << std::endl;
		};
		Span (unsigned int n) : _size(n)
		{
			std::cout << YEL << "Span of size : " << n << std::endl << RESET;
		};
		Span (Span const & src)
		{
			*this = src;
			_size = src._size;			
			_vct = src._vct;
		};
		~Span(void) {
		};
		Span &operator=(Span const & rhs)
		{
			if (this != &rhs)
			{
				this->_size = rhs._size;
				this->_vct = rhs._vct;
			}
			return *this;
		};
		void	getVector(void) const;
		void	addNumber(unsigned int n);
		int		shortestSpan();
		int		longestSpan();
		void	fillSpan(std::vector<int>::iterator n1, std::vector<int>::iterator n2);
		class Toomuchnumber:public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Oh no ! There is already too much numbers :(");
				}
		};
		class Notenoughnumber:public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Oh no ! You don't have enough numbers to use this function :(");
				}
		};
	private:
		unsigned int	_size;
		std::vector<int> _vct;

};


#endif
