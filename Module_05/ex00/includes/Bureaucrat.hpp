/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:39 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 18:20:39 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include "Define.hpp"
#include <string>
#include <iostream>

class Bureaucrat {
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat(void);
	Bureaucrat (Bureaucrat const & src);
	Bureaucrat &operator=(Bureaucrat const & rhs);
	std::string getName(void) const;
	int getGrade(void) const;
	int	plusGrade(void);
	int	minusGrade(void);
	class GradeTooHightException:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Bureaucrat::GradeTooHightException");
			}
	};
	class GradeTooLowException:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Bureaucrat::GradeTooLowException");
			}
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream &operator << (std::ostream &o, Bureaucrat const & i);

#endif