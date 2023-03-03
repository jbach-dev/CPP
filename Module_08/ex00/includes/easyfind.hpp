/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/23 14:29:26 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include <algorithm>


template <typename T>
void easyfind(T & x, int nb)
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator ite = x.end();
	it = std::find(x.begin(), x.end(), nb);
	if (ite == it)
		std::cout << BLUE << "No occurence were found :( " << RESET << "with number = " << nb<< std::endl;
	else
		std::cout << GRN << "An occurence was found " << RESET << "with number = " << nb << std::endl;
};


#endif