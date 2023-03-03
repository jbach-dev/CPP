/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:16:10 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:48:08 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Random Name"), _grade(5)
{
	std::cout << YEL << "Bureaucrat initialized Random :)" << std::endl << WHITE;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHightException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << YEL << "Bureaucrat initialized :)" << std::endl << WHITE;
	// this->_name = name;
	// this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << YEL << "Bureaucrat destroyed :(" << std::endl << WHITE;
	return;
}

Bureaucrat::Bureaucrat (Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
	*this = src;
	// this->_grade = src._grade;
	// this->_name = src._name;
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
	{
		(std::string) this->_name = src._name;
		this->_grade = src._grade;
	}
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

int	Bureaucrat::plusGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (this->_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = this->_grade - 1;
	return (this->_grade);
}

int	Bureaucrat::minusGrade(void)
{
	if (this->_grade + 1 < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = this->_grade + 1;
	return (this->_grade);
}


std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << BWHT << i.getName() << WHITE<< ", bureaucrat grade " << BWHT << i.getGrade() << WHITE;
	return o;
}