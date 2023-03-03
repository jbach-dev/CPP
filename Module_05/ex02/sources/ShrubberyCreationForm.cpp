/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:42:01 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:26:31 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form", 145, 137)
{
	this->_target = "Random Target";
	std::cout << YEL << "ShrubberyCreationForm initialized :)" << std::endl << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
	std::cout << YEL << "ShrubberyCreationForm initialized :)" << std::endl << RESET;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << YEL << "ShrubberyCreationForm destroyed :(" << std::endl << RESET;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm (ShrubberyCreationForm const & src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
	this->_target = src._target;
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setSigned(src.getSigned());
		this->_target = src._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &excecutor)const
{
	if (this->getSigned() && excecutor.getGrade() <= this->getGradeExec())
	{
		int random = 0;
		int line = 50;
		int nb_carac = 1;
		std::string new_filename = this->_target;
		new_filename.append("_shrubbery");
		std::ofstream infile(new_filename.c_str());
		while (line >= 0)
		{
			int white_space = (100 - nb_carac) / 2;
			for (; white_space > 0; white_space--)
				infile << " ";
			white_space = (50 - nb_carac) / 2;
			for (int charac = 50 - (white_space * 2) ; charac != 0; charac--)
			{
				while (random > 123 || random < 33)
					random = 33 + rand() % 1100;
				infile << char(random);
				random = 0;
			}
			infile << std::endl;
			line--;
			nb_carac += 2;
		}
		infile.close();
	}
	else
		throw Bureaucrat::GradeTooLowException();

}