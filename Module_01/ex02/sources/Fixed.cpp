/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:20 by jbach             #+#    #+#             */
/*   Updated: 2022/10/20 18:20:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
	return;
}

Fixed::Fixed(int const i) : _fixed_point(i)
{
	//prend un entier et le convertit en virgule fixe
	this->_fixed_point = i << this->_nb_bits_frac;
	return;
}

Fixed::Fixed(float const f) : _fixed_point(f)
{
	int one_fixed = 1 << this->_nb_bits_frac;
	this->_fixed_point = roundf(f * one_fixed);
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed::Fixed (Fixed const & src)
{
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
	return int(roundf(this->toFloat()));
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return *this;
}

bool  Fixed::operator>(Fixed const & nb)
{
	if (this->getRawBits() > nb.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator<(Fixed const & nb)
{
	if (this->getRawBits() < nb.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator>=(Fixed const & nb)
{
	if (this->getRawBits() >= nb.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator<=(Fixed const & nb)
{
	if (this->getRawBits() <= nb.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator==(Fixed const & nb)
{
	if (this->getRawBits() == nb.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator!=(Fixed const & nb)
{
	if (this->getRawBits() != nb.getRawBits())
		return true;
	return false;
}

float  Fixed::operator+(Fixed const & nb)
{
	return this->toFloat() + nb.toFloat();
}


float  Fixed::operator-(Fixed const & nb)
{
	return this->toFloat() - nb.toFloat();
}

float  Fixed::operator*(Fixed const & nb)
{
	return this->toFloat() * nb.toFloat();
}

float  Fixed::operator/(Fixed const & nb)
{
	return this->toFloat() / nb.toFloat();
}


//pre-incrementation
Fixed Fixed::operator++(void)
{
	this->_fixed_point++;
	return (*this);
}

//pre-decrement
Fixed Fixed::operator--(void)
{
	this->_fixed_point--;
	return (*this);
}

//post-incrementation
Fixed Fixed::operator++(int)
{
	Fixed tmp = (*this);
	++this->_fixed_point;
	return (tmp);
}

//post-decrement
Fixed Fixed::operator--(int)
{
	Fixed tmp = (*this);
	--this->_fixed_point;
	return (tmp);
}

Fixed &Fixed::min(Fixed & nb1, Fixed & nb2)
{
	if (nb1.toFloat() > nb2.toFloat())
		return (nb2);
	return (nb1);
}

Fixed const &Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.toFloat() > nb2.toFloat())
		return (nb2);
	return (nb1);
}

Fixed &Fixed::max(Fixed & nb1, Fixed & nb2)
{
	if (nb1.toFloat() > nb2.toFloat())
		return (nb1);
	return (nb2);
}

Fixed const &Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.toFloat() > nb2.toFloat())
		return (nb1);
	return (nb2);
}


std::ostream &	operator<<(std::ostream &o, Fixed const &i)
{
	//insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie
	o << i.toFloat();
	return o;
}