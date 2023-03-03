/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:16:10 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:19:43 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << YEL << "Intern initialized :)" << std::endl << RESET;
}

Intern::~Intern(void)
{
	std::cout << YEL << "Intern destroyed :(" << std::endl << RESET;
	return;
}

Intern::Intern (Intern const & src)
{
	*this = src;
	return;
}

Intern & Intern::operator=(Intern const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	std::string all_form[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon",
	};

	Form *newForm[3] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};

	for (int i = 0; i < 3; i++)
	{
		if (all_form[i] == form)
		{
			for (int y = 0; y < 3; y++)
			{
				if (y != i)
					delete (newForm[y]);
			}
			return (newForm[i]);
		}
	}
	for (int i = 0; i < 3; i++)
		delete (newForm[i]);
	throw Intern::NoForm();
	return (NULL);
}