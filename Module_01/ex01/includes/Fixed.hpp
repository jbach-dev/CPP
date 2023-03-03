/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:22 by jbach             #+#    #+#             */
/*   Updated: 2022/10/20 16:49:53 by jbach            ###   ########.fr       */
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