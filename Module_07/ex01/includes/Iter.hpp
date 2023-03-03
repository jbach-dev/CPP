/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/09 18:54:51 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>

template <typename T>
void iter(T *adress, int size, void (*func)(T const &x))
{
	for (int i = 0; i < size; i++)
	{
		(*func)(adress[i]);
	}
};

#endif
