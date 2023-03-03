/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeDouble.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:36:27 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:33:20 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void Conversion_scalaire::setTypeDouble()
{
	double nb_overflow;
	std::string pseudo_lit[3] = {"-inf", "+inf", "nan"};
	for (int i = 0; i < 3; i++)
	{
		if (pseudo_lit[i] == this->_value)
		{
			this->_type = "double";
			this->_special_type = 0;
			return;
		}
	}
	int pp = 0;
	for (size_t i = 0; i < std::strlen(this->_value.c_str()) ; i++)
	{
		if (this->_value[i] == '.')
			pp++;
		if (pp > 1)
		{
			throw Conversion_scalaire::ProblemParameter();
			return ;
		}
	}
	int flag = 0;
	size_t index = 0;
	size_t value_len_minus = std::strlen(this->_value.c_str()) - 1;
	if (this->_value[0] == '-' || this->_value[0] == '+')
		index = 1;
	for (; index < std::strlen(this->_value.c_str()); index++)
	{
		if (!isdigit(this->_value[index]) && this->_value[index] != '.')
		{
			flag = 1;
			break;
		}
	}
	size_t point = this->_value.find('.');
	if (!isdigit(this->_value[point - 1]) || !isdigit(this->_value[point + 1]))
		flag = 1;
	if (flag == 0 && point <= value_len_minus)
	{
		this->_type = "double";
		nb_overflow = std::atof(this->_value.c_str());
	
		if (nb_overflow > DBL_MAX || nb_overflow < -DBL_MAX)
			throw Conversion_scalaire::ConversionImpossible();
	}
}


void	Conversion_scalaire::convFromDouble()
{
	if (this->_special_type == 0 && this->getValue() == "nan")
		this->_double = std::numeric_limits<float>::signaling_NaN();
	else if (this->_special_type == 0 && this->getValue() == "+inf")
		this->_double = std::numeric_limits<float>::infinity();
	else if (this->_special_type == 0 && this->getValue() == "-inf")
		this->_double = -1 * std::numeric_limits<float>::infinity();
	else
		this->_double = std::atof(this->getValue().c_str());
	size_t point = this->_value.find('.');
	point++;
	while (point <= (std::strlen(this->getValue().c_str()) - 1))
	{
		if (this->getValue()[point] != '0')
		{
			point = 0;
			break;
		}
		point++;
	}
	if (point == 0 && this->_special_type != 0)
		this->_special_type = 1;
	if (point > 0 && this->_special_type != 0)
		this->_special_type = 2;
	this->_int = static_cast<int>(this->_double);	
	this->_char = static_cast<char>(this->_double);
	this->_float = static_cast<float>(this->_double);
}