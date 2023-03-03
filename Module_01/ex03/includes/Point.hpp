/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:22 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 14:02:54 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
#include <string>
#include <iostream>
#include <math.h>
#include <Fixed.hpp>
#include <Define.hpp>

class Point {
public:
	Point(void);
	Point(float const &nb1, float const &nb2);
	~Point(void);
	Point (Point const & src);
	Point &operator=(Point const & rhs);
	const Fixed &getX(void) const;
	const Fixed &getY(void) const;


private:
	Fixed _x;
	Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif