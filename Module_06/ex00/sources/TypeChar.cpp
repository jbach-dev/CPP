/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeChar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:36:24 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:33:15 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void Conversion_scalaire::setTypeChar()
{
	if (std::strlen(this->_value.c_str()) == 1 && isalpha(this->_value[0]))
		this->_type = "char";
	else if (this->_type == "null")
		throw Conversion_scalaire::ProblemParameter();
}


void	Conversion_scalaire::convFromChar()
{
	this->_char = this->getValue().c_str()[0];
	this->_int = static_cast<int>(this->_char);	
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}