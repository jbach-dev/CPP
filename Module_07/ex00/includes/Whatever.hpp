/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:58:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>

template <typename T>
void swap(T & x, T & y)
{
	std::cout << BLUE << "--- before swap ---" << std::endl << RESET;
	std::cout << "x = " << x;
	std::cout << "   |   y = " << y << std::endl;
	T z;
	z = x;
	x = y;
	y = z;
	std::cout << BLUE << "--- after swap ---" << std::endl << RESET;
	std::cout << "x = " << x;
	std::cout << "   |   y = " << y << std::endl << std::endl ;
};

template <typename T>
T const & min(T const & x, T const & y)
{
	std::cout << BLUE << "--- values ---" << std::endl << RESET;
	std::cout << "x = " << x;
	std::cout << "   |   y = " << y << std::endl;
	if (x < y)
	{
		std::cout << BLUE << "--- return ---" << std::endl << RESET;
		std::cout << "x = " << x << std::endl << std::endl;
		return (x);
	}
	else
	{
		std::cout << BLUE << "--- return ---" << std::endl << RESET;
		std::cout << "y = " << y << std::endl << std::endl;
		return (y);
	}
};


template <typename T>
T const & max(T const & x, T const & y)
{
	std::cout << BLUE << "--- values ---" << std::endl << RESET;
	std::cout << "x = " << x;
	std::cout << "   |   y = " << y << std::endl;
	if (x > y)
	{
		std::cout << BLUE << "--- return ---" << std::endl << RESET;
		std::cout << "x = " << x << std::endl << std::endl;
		return (x);
	}
	else
	{
		std::cout << BLUE << "--- return ---" << std::endl << RESET;
		std::cout << "y = " << y << std::endl << std::endl;
		return (y);
	}
};

#endif