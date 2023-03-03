/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:19:21 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 16:34:21 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t a;
	a = reinterpret_cast<uintptr_t &> (ptr);
	return (a);
}