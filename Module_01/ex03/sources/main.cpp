/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:39:17 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 13:54:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.hpp"

int main( void ) {
	//Point in triangle
	Point a;
	Point b(7,4);
	Point c(0,4);
	Point point(2,2);
	bsp(a, b, c, point);

	//Point in triangle
	Point a3(2,4);
	Point b3(3,-6);
	Point c3(7,8);
	Point point3(2,2);
	bsp(a3, b3, c3, point3);

	//Point not in triangle
	Point a1;
	Point b1(7,4);
	Point c1(0,4);
	Point point1(2,1);
	bsp(a1, b1, c1, point1);

	//Point in triangle
	Point a2(10,14);
	Point b2(-9,-9);
	Point c2(17,-26);
	Point point2(7,-4);
	bsp(a2, b2, c2, point2);
	return (0);
}