/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:02:25 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:25:38 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
#include "Define.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form {
public:
	Form(void);
	Form(std::string name, int grade_sign, int grade_exec);
	virtual ~Form(void);
	Form (Form const & src);
	Form &operator=(Form const & rhs);
	std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeSign(void) const;
	int getGradeExec(void) const;
	void setName(std::string name);
	void setSigned(bool sign);
	void	beSigned(Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	class GradeTooHightException:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Form::GradeTooHightException");
			}
	};
	class GradeTooLowException:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Form::GradeTooLowException");
			}
	};

private:
	const std::string _name;
	bool	_signed;
	const int _grade_sign;
	const int _grade_exec;
};

std::ostream &operator << (std::ostream &o, Form const & i);

#endif