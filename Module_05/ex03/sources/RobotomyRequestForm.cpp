/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:54:59 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:31:20 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45)
{
	this->_target = "Random Target";
	std::cout << YEL << "RobotomyRequestForm initialized :)" << std::endl << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45)
{
	this->_target = target;
	std::cout << YEL << "RobotomyRequestForm initialized :)" << std::endl << RESET;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << YEL << "RobotomyRequestForm destroyed :(" << std::endl << RESET;
	return;
}

RobotomyRequestForm::RobotomyRequestForm (RobotomyRequestForm const & src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
	this->_target = src._target;
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setSigned(src.getSigned());
		this->_target = src._target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &excecutor)const
{
	if (this->getSigned() && excecutor.getGrade() <= this->getGradeExec())
	{
		std::cout << GRN <<std::endl<<std::endl << "Bzzzzzzzzzzzzzzzzzzzzzzzzzzzz" <<std::endl;
		if ((rand() % 2) + 1 ==  2)
			std::cout << this->_target << " has become a robot with success !" << std::endl << std::endl << std::endl << RESET;
		else
			std::cout << this->_target << " couln't become a robot !" << std::endl << std::endl << std::endl<< RESET;
	}
	else
		throw Bureaucrat::GradeTooLowException();

}

void	RobotomyRequestForm::setTarget(std::string target)
{
		this->_target = target;
	return;
}