/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:38:54 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 14:56:04 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits.h>

void Span::addNumber(unsigned int n)
{
	if (_vct.size() < this->_size)
	{
		std::cout << "Add number : " << n << std::endl;
		_vct.push_back(n);
	}
	else
		throw Span::Toomuchnumber();
}

int	Span::shortestSpan()
{
	if (_vct.empty() || _vct.size() == 1)
		throw Span::Notenoughnumber();
	int difference = INT_MAX;
	std::sort(_vct.begin(), _vct.end());
	std::vector<int>::const_iterator second = _vct.begin();
	std::vector<int>::const_iterator ite = _vct.end();
	for (std::vector<int>::const_iterator first = second++; second != ite; ++first,++second)
	{
		if ((*second - *first) < difference)
			difference = *second - *first;
	}
	std::cout << GRN << "The smallest Span is = " << difference << std::endl << std::endl << RESET;
	return (difference);
}

int	Span::longestSpan()
{
	if (_vct.empty() || _vct.size() == 1)
		throw Span::Notenoughnumber();
	std::sort(_vct.begin(), _vct.end());
	int difference = _vct.back() - _vct.front();	
	std::cout << GRN << "The longest Span is = " << difference << std::endl << std::endl << RESET;
	return (difference);
}

void	Span::getVector(void) const
{
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = _vct.end();
	
	for (it = _vct.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}
}

void	Span::fillSpan(std::vector<int>::iterator n1, std::vector<int>::iterator n2)
{
	int size_available = this->_size - _vct.size();
	if (std::distance(n1,n2) < size_available)
	{
		std::vector<int>::iterator it = _vct.begin();
  		_vct.insert (it, n1, n2); 
	}
	else
		throw Span::Toomuchnumber();
}
