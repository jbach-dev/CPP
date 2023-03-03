/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeInt.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:34:58 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 15:38:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void Conversion_scalaire::setTypeInt()
{
	long nb_overflow;
	int flag = 0;
	size_t index = 0;
	if (this->_value[0] == '-' || this->_value[0] == '+')
		index = 1;
	for (; index < std::strlen(this->_value.c_str()); index++)
	{
		if (!isdigit(this->_value[index]))
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		this->_type = "int";
		nb_overflow = std::atof(this->_value.c_str());
		if (nb_overflow > INT_MAX || nb_overflow < INT_MIN)
			throw Conversion_scalaire::ConversionImpossible();
	}
}

void	Conversion_scalaire::convFromInt()
{
	this->_int = std::atoi(this->_value.c_str());
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}
