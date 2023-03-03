/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:26:35 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 13:55:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(float const &nb1, float const &nb2) : _x(nb1), _y(nb2)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point::Point (Point const & src) : _x(src.getX()), _y(src.getY())
{
	// *this = src;
	// return;
}


const Fixed	&Point::getX(void) const
{
	// std::cout << "getX member function called" << std::endl;
	return this->_x;
}

const Fixed	&Point::getY(void) const
{
	// std::cout << "getY member function called" << std::endl;
	return this->_y;
}

Point & Point::operator=(Point const & rhs)
{
	(void)rhs;
	return *this;
}
