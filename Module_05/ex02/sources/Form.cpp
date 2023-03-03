/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:33:28 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:38:40 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Random Name"), _signed(false), _grade_sign(150), _grade_exec(150)
{
	if (_grade_sign < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (_grade_sign > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade_exec < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (_grade_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << YEL << "Form initialized :)" << std::endl << RESET;
}

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (_grade_sign < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (_grade_sign > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade_exec < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (_grade_exec > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << YEL << "Form initialized :)" << std::endl << RESET;
}

Form::~Form(void)
{
	std::cout << YEL << "Form destroyed :(" << std::endl << RESET;
	return;
}

Form::Form (Form const & src) : _name(src._name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec)
{
	*this = src;
	this->_signed = src._signed;
	return;
}

Form & Form::operator=(Form const & src)
{
	if (this != &src)
	{
		this->setName((src.getName()));
		this->setSigned(src.getSigned());
	}
	return *this;
}

std::string Form::getName(void) const
{
	return this->_name;
}

bool Form::getSigned(void) const
{
	return this->_signed;
}

int Form::getGradeSign(void) const
{
	return this->_grade_sign;
}

int Form::getGradeExec(void) const
{
	return this->_grade_exec;
}

void Form::setName(std::string name)
{
	(std::string) this->_name = name;
	return;
}

void Form::setSigned(bool sign)
{
	this->_signed = sign;
}


void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_grade_sign >= bureaucrat.getGrade())
		this->_signed = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream &o, Form const &i)
{
	o << BWHT << i.getName() << RESET;
	if (!i.getSigned())
		o << " is " << BWHT << "not signed" << RESET << " | needs to be signed by grade "\
		<< BWHT << i.getGradeSign() << RESET << " | needs to be executed by grade " \
		<< BWHT << i.getGradeExec() << RESET;
	else
		o << " is " << BWHT << "signed" << RESET << " | needs to be signed by grade "\
		<< BWHT << i.getGradeSign() << RESET << " | needs to be executed by grade " \
		<< BWHT << i.getGradeExec() << RESET;
	
	return o;
}