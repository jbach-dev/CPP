/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:20 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 13:50:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default Constructeur called" << std::endl;
	return;
}

Fixed::Fixed(int const i) : _fixed_point(i)
{
	//prend un entier et le convertit en virgule fixe
	std::cout << "Default Int Constructeur called" << std::endl;
	this->_fixed_point = i << this->_nb_bits_frac;
	return;
}

Fixed::Fixed(float const f) : _fixed_point(f)
{
	std::cout << "Default Float Constructeur called" << std::endl;
	int one_fixed = 1 << this->_nb_bits_frac;
	this->_fixed_point = roundf(f * one_fixed);
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

float	Fixed::toFloat(void) const
{
	//convertit la valeur en virgule fixe en nombre à virgule flottante
	int one_fixed = 1 << this->_nb_bits_frac;
	return static_cast<float>(this->_fixed_point) / one_fixed;
}

int	Fixed::toInt(void) const
{
	//convertit la valeur en virgule fixe en nombre à virgule flottante
	return static_cast<float>(roundf(this->toFloat()));
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return *this;
}
std::ostream &	operator<<(std::ostream &o, Fixed const &i)
{
	//insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie
	o << i.toFloat();
	return o;
}