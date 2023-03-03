/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:20 by jbach             #+#    #+#             */
/*   Updated: 2022/10/19 18:57:10 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0), _nb_bits_frac(8)
{
	std::cout << "Default Constructeur called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed (Fixed const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
	return;
}

int	Fixed::getBitsFrac(void) const
{
	return this->_nb_bits_frac;
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_fixed_point = rhs.getRawBits();
	}

	return *this;
}