/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:01:44 by jbach             #+#    #+#             */
/*   Updated: 2022/10/24 14:03:00 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

double area_size(Point p1, Point p2, Point p3)
{
	double area;
	double pos;
	pos = (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) +\
	(p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) +\
	(p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()));
	if (pos < 0)
		pos = -pos;
	area = 0.5 * (pos);
	return (area);
}

//a, b, c : Les sommets du triangle
//point : point à évaluer
//True si le point est a l'int et false dans le cas contraire
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	double area;
	double area_small_1;
	double area_small_2;
	double area_small_3;
	std::cout << "ax = " << a.getX().toFloat() << std::endl << WHITE;
	std::cout << "ay = " << a.getY().toFloat() << std::endl<< WHITE;

	std::cout << "bx = " << b.getX().toFloat() << std::endl << WHITE;
	std::cout << "by = " << b.getY().toFloat() << std::endl<< WHITE;

	std::cout << "cx = " << c.getX().toFloat() << std::endl << WHITE;
	std::cout << "cy = " << c.getY().toFloat() << std::endl << WHITE;

	std::cout << "pointx = " << point.getX().toFloat() << std::endl << WHITE;
	std::cout << "pointy = " << point.getY().toFloat() << std::endl<< WHITE;
	
	//area big triangle
	area = area_size(a,b,c);

	area_small_1 = area_size(a,b,point);
	area_small_2 = area_size(a,c,point);
	area_small_3 = area_size(b,c,point);
	if (round(area) == round(area_small_1 + area_small_2 + area_small_3))
	{
		std::cout << GRN << "The point is in the triangle !" << std::endl  << std::endl << WHITE;
		return true;
	}
	else
	{
		std::cout << RED << "The point is not in the triangle !" << std::endl << std::endl  << WHITE;
		return false;
	}
}