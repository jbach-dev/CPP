/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:54:59 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:31:01 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5)
{
	this->_target = "Random Target";
	std::cout << YEL << "PresidentialPardonForm initialized :)" << std::endl << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5)
{
	this->_target = target;
	std::cout << YEL << "PresidentialPardonForm initialized :)" << std::endl << RESET;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << YEL << "PresidentialPardonForm destroyed :(" << std::endl << RESET;
	return;
}

PresidentialPardonForm::PresidentialPardonForm (PresidentialPardonForm const & src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
	this->_target = src._target;
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setSigned(src.getSigned());
		this->_target = src._target;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &excecutor)const
{
	if (this->getSigned() && excecutor.getGrade() <= this->getGradeExec())
		std::cout << GRN << std::endl << std::endl << std::endl << this->_target << " was forgiven by Zaphod Beeblebrox !" << std::endl << std::endl << std::endl << RESET;
	else
		throw Bureaucrat::GradeTooLowException();
}