/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:10:35 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 16:08:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"


Conversion_scalaire::Conversion_scalaire(std::string value) : _value(value), _type("null"), _special_type(-1)
{
	std::cout << YEL << "Conversion_scalaire initialized :)" << std::endl << RESET;
}

Conversion_scalaire::~Conversion_scalaire(void)
{
	std::cout << YEL << "Conversion_scalaire destroyed :(" << std::endl << RESET;
	return;
}

int Conversion_scalaire::getSpecial(void) const
{
	return (this->_special_type);
}


std::string Conversion_scalaire::getValue(void) const
{
	return (this->_value);
}

std::string Conversion_scalaire::getType(void) const
{
	return (this->_type);
}

char Conversion_scalaire::getChar(void) const
{
	return (this->_char);
}

int Conversion_scalaire::getInt(void) const
{
	return (this->_int);
}

float Conversion_scalaire::getFloat(void) const
{
	return (this->_float);
}

double Conversion_scalaire::getDouble(void) const
{
	return (this->_double);
}

void Conversion_scalaire::setType(std::string type)
{
	this->_type = type;	
}

void Conversion(int argc, char **argv)
{
	if (argc != 2)
	{
		throw Conversion_scalaire::ProblemParameter();
	}
	Conversion_scalaire conv(argv[1]);
	conv.setTypeInt();
	conv.setTypeFloat();
	conv.setTypeDouble();
	conv.setTypeChar();
	std::string alltypes[5] = {"char", "int", "float", "double", "null"};
	int i = 0;
	while (i < 5)
	{
		if (alltypes[i] == conv.getType())
			break;
		i++;
	}
	switch(i)	
	{
		case (0):
		{
			conv.convFromChar();
			break;
		}
		case (1):
		{
			conv.convFromInt();
			break;
		}
		case (2):
		{
			conv.convFromFloat();
			break;
		}
		case (3):
		{
			conv.convFromDouble();
			break;
		}
	}
	std::cout << conv << std::endl;
}

std::ostream &	operator<<(std::ostream &o, Conversion_scalaire const &i)
{
	//special : 
	//-1 = rien
	//0 = rien
	//1 = rien
	//2 = que des 0
	if (isprint(i.getChar()))
		o << WHITE << "char : " << BWHT << i.getChar() << RESET <<std::endl;
	else if (i.getSpecial() == 0)
		o << WHITE << "char : " << BWHT << "impossible" << RESET <<std::endl;
	else
		o << WHITE << "char : " << BWHT << "Not displayable" << RESET <<std::endl;
	if (i.getInt() > INT_MAX || i.getInt() < INT_MIN || i.getSpecial() == 0)
		o << WHITE << "int : " << BWHT << "impossible" << RESET <<std::endl;
	else
		o << WHITE << "int : " << BWHT << i.getInt() << RESET <<std::endl;
	if ((i.getType() == "float" || i.getType() == "double") && (i.getSpecial() == 0 || i.getSpecial() == 1))
		o << WHITE << "float : " << BWHT << i.getFloat() << "f" << RESET <<std::endl;
	else if (i.getSpecial() == 0)
		o << WHITE << "float : " << BWHT << i.getFloat() << RESET <<std::endl;
	else 
		o << WHITE << "float : " << BWHT << i.getFloat() << ".0f" << RESET <<std::endl;
	if ((i.getType() != "double" && i.getType() != "float") || (i.getSpecial() == 2))
		o << WHITE << "double : " << BWHT << i.getDouble() << ".0" << RESET <<std::endl;
	else
		o << WHITE << "double : " << BWHT << i.getDouble() << RESET <<std::endl;
	
	return o;
}