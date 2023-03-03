/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 16:11:12 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
#include "Define.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <climits>
#include <cfloat>

void Conversion(int argc, char **argv);

class Conversion_scalaire {
public:
	Conversion_scalaire(std::string value);
	~Conversion_scalaire(void);
	std::string getValue(void)const;
	std::string getType(void)const;
	int getSpecial(void) const;
	char getChar(void) const;
	int getInt(void) const;
	float getFloat(void) const;
	double getDouble(void) const;
	void setType(std::string type);
	void setTypeInt(void);
	void setTypeFloat(void);
	void setTypeDouble(void);
	void setTypeChar(void);
	void convFromChar();
	void convFromInt();
	void convFromDouble();
	void convFromFloat();
	class ProblemParameter:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Parameters error !");
			}
	};
	class ConversionImpossible:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The conversion is impossible !");
			}
	};
	class ConversionNoDisplaypublic:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The conversion is not displayable !");
			}
	};

private:
	std::string _value;
	std::string _type;
	char _char;
	int _int;
	float _float;
	double _double;
	int	_special_type;
};

std::ostream &operator << (std::ostream &o, Conversion_scalaire const & i);

#endif