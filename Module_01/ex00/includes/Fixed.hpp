/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:22 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 14:02:04 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <string>
#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed (Fixed const & src);
	Fixed &operator=(Fixed const & rhs);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	int	getBitsFrac(void) const;

private:
	int	_fixed_point;
	int	_nb_bits_frac;
};

#endif