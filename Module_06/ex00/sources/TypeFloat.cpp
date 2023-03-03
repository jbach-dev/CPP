/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeFloat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:35:55 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:33:28 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void Conversion_scalaire::setTypeFloat()
{
	std::string pseudo_lit[3] = {"-inff", "+inff", "nanf"};
	for (int i = 0; i < 3; i++)
	{
		if (pseudo_lit[i] == this->_value)
		{
			this->_type = "float";
			this->_special_type = 0;
			return;
		}
	}
	int pp = 0;
	int pf = 0;
	for (size_t i = 0; i < std::strlen(this->_value.c_str()) ; i++)
	{
		if (this->_value[i] == '.')
			pp++;
		if (this->_value[i] == 'f')
			pf++;
		if (pp > 1 || pf > 1)
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
		if (!isdigit(this->_value[index]) && this->_value[index] != '.' && this->_value[index] != 'f')
		{
			flag = 1;
			break;
		}
	}
	size_t point = this->_value.find('.');
	if (!isdigit(this->_value[point - 1]) || !isdigit(this->_value[point + 1]))
		flag = 1;
	if (flag == 0 && this->_value[value_len_minus] == 'f' && point <= value_len_minus)
	{
		this->_type = "float";
		float nb_overflow;
		nb_overflow = std::atof(this->_value.c_str());
		if (nb_overflow > FLT_MAX || nb_overflow < -FLT_MAX)
			throw Conversion_scalaire::ConversionImpossible();
	}
}

void	Conversion_scalaire::convFromFloat()
{
	if (this->_special_type == 0 && this->getValue() == "nanf")
		this->_float = std::numeric_limits<float>::signaling_NaN();
	else if (this->_special_type == 0 && this->getValue() == "+inff")
		this->_float = std::numeric_limits<float>::infinity();
	else if (this->_special_type == 0 && this->getValue() == "-inff")
		this->_float = -1 * std::numeric_limits<float>::infinity();
	else
		this->_float = std::atof(this->getValue().c_str());
	size_t point = this->_value.find('.');
	point++;
	while (point <= (std::strlen(this->getValue().c_str()) - 1))
	{
		if (this->getValue()[point] != '0' && this->getValue()[point] != 'f')
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
	this->_int = static_cast<int>(this->_float);	
	this->_char = static_cast<char>(this->_float);
	this->_double = static_cast<double>(this->_float);
}