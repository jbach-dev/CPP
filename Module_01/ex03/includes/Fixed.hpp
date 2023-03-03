/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:22 by jbach             #+#    #+#             */
/*   Updated: 2022/10/20 18:20:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <string>
#include <iostream>
#include <math.h>

class Fixed {
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed (Fixed const & src);
	Fixed &operator=(Fixed const & rhs);
	bool  operator>(Fixed const & nb);
	bool  operator<(Fixed const & nb);
	bool  operator>=(Fixed const & nb);
	bool  operator<=(Fixed const & nb);
	bool  operator==(Fixed const & nb);
	bool  operator!=(Fixed const & nb);
	float  operator+(Fixed const & nb);
	float  operator-(Fixed const & nb);
	float  operator*(Fixed const & nb);
	float  operator/(Fixed const & nb);
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);
	static Fixed &min(Fixed &nb1, Fixed &nb2);
	static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
	static Fixed &max(Fixed &nb1, Fixed &nb2);
	static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
	~Fixed(void);
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	int	getBitsFrac(void) const;

private:
	int	_fixed_point;
	static int const	_nb_bits_frac = 8;
};

std::ostream &operator << (std::ostream &o, Fixed const & i);

#endif