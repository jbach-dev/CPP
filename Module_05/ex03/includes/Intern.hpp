/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:00:58 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 17:59:36 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
#include "Define.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>

class Form;

class Intern {
public:
	Intern();
	virtual ~Intern(void);
	Intern (Intern const & src);
	Intern &operator=(Intern const & rhs);
	Form	*makeForm(std::string form, std::string target);
	class NoForm:public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Intern::This Form doesn't exist");
			}
	};
};

#endif