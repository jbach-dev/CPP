/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:37:07 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl << CYAN << "-- Bureaucrat --" << std::endl << std::endl << WHITE;
	// try
	// {
		// Bureaucrat Ane("L'âne", 146);
	// 	std::cout << Ane << std::endl;
	// 	Ane.minusGrade();
	// 	std::cout << Ane << std::endl;
	// 	Ane.minusGrade();
	// 	std::cout << Ane << std::endl;
	// 	Ane.minusGrade();
	// 	std::cout << Ane << std::endl;
	// 	Ane.minusGrade();
	// 	std::cout << Ane << std::endl;
	// 	Ane.minusGrade();
	// 	std::cout << Ane << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << RED << e.what() << std::endl << WHITE;
	// }
	// try
	// {
		// Bureaucrat Shrek("Shrek", 3);
	// 	Shrek.plusGrade();
	// 	std::cout << Shrek << std::endl;
	// 	Shrek.plusGrade();
	// 	std::cout << Shrek << std::endl;
	// 	Shrek.plusGrade();
	// 	std::cout << Shrek << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << RED << e.what() << std::endl << WHITE;
	// }
	// std::cout << std::endl << CYAN << "-- Form Shrubbery Creation Form --" << std::endl << std::endl << WHITE;
	// Bureaucrat Fiona("Fiona", 148);
	// Bureaucrat Farquaad("Farquaad", 138);
	// Bureaucrat Gingerbread("Gingerbread", 135);
	// Bureaucrat Chat("Chat", 137);
	// ShrubberyCreationForm Shrubbery("Charmant");
	// try
	// {
	// 	Fiona.signForm(Shrubbery);
	// 	Chat.signForm(Shrubbery);
	// 	Farquaad.executeForm(Shrubbery);
	// 	Gingerbread.executeForm(Shrubbery);
	// 	std::cout << Shrubbery << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << RED << e.what() << std::endl << WHITE;
	// }
	// std::cout << std::endl << CYAN << "-- Form Robotomy Request Form --" << std::endl << std::endl << WHITE;
	// Bureaucrat Fergus("Fergus", 44);
	// Bureaucrat Furckle("Furckle", 72);
	// RobotomyRequestForm Robotomy("Charmant");
	// try
	// {
	// 	Chat.signForm(Robotomy);
	// 	std::cout << Robotomy << std::endl;
	// 	Furckle.signForm(Robotomy);
	// 	Furckle.executeForm(Robotomy);
	// 	Fergus.executeForm(Robotomy);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << RED << e.what() << std::endl << WHITE;
	// }
	// std::cout << std::endl << CYAN << "-- Form Presidential Pardon Form --" << std::endl << std::endl << WHITE;
	// Bureaucrat Harold("Harold", 8);
	// Bureaucrat Felicia("Felicia", 24);
	// Bureaucrat Charmant("Charmant", 4);
	// PresidentialPardonForm PresidentialPardon("Charmant");
	// try
	// {
	// 	Fergus.signForm(PresidentialPardon);
	// 	std::cout << PresidentialPardon << std::endl;
	// 	Felicia.signForm(PresidentialPardon);
	// 	Harold.executeForm(PresidentialPardon);
	// 	Charmant.executeForm(PresidentialPardon);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << RED << e.what() << std::endl << WHITE;
	// }
	Intern someRandomIntern;
	std::cout << std::endl << CYAN << "-- Intern --" << std::endl << std::endl << WHITE;
	std::cout << std::endl << BLUE << "-- Shrubbery Creation Form --" << std::endl << std::endl << WHITE;
	try
	{
		Form* scf;
		Bureaucrat Fiona("Fiona", 148);
		Bureaucrat Farquaad("Farquaad", 138);
		Bureaucrat Gingerbread("Gingerbread", 135);
		Bureaucrat Chat("Chat", 137);
		scf = someRandomIntern.makeForm("shrubbery creation", "Charmant");
		ShrubberyCreationForm Shrubbery("Charmant");
		std::cout << std::endl << UBLU << "-- The intern created the form --" << std::endl << std::endl << WHITE;
		Fiona.signForm(*scf);
		Chat.signForm(*scf);
		Farquaad.executeForm(*scf);
		Gingerbread.executeForm(*scf);
		std::cout << *scf << std::endl;
		std::cout << std::endl << UBLU << "-- I created the Form --" << std::endl << std::endl << WHITE;
		Fiona.signForm(Shrubbery);
		Chat.signForm(Shrubbery);
		Farquaad.executeForm(Shrubbery);
		Gingerbread.executeForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
		delete (scf);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	std::cout << std::endl << CYAN << "-- Robotomy Request Form --" << std::endl << std::endl << WHITE;
	try
	{
		Bureaucrat Chat("Chat", 137);
		Form* rrf;		
		Bureaucrat Fergus("Fergus", 44);
		Bureaucrat Furckle("Furckle", 72);
		rrf = someRandomIntern.makeForm("robotomy request", "Charmant");
		RobotomyRequestForm Robotomy("Charmant");
		std::cout << std::endl << UBLU << "-- The intern created the form --" << std::endl << std::endl << WHITE;
		Chat.signForm(*rrf);
		Furckle.signForm(*rrf);
		Furckle.executeForm(*rrf);
		Fergus.executeForm(*rrf);
		std::cout << *rrf << std::endl;
		std::cout << std::endl << UBLU << "-- I created the Form --" << std::endl << std::endl << WHITE;
		Chat.signForm(Robotomy);
		Furckle.signForm(Robotomy);
		Furckle.executeForm(Robotomy);
		Fergus.executeForm(Robotomy);
		std::cout << Robotomy << std::endl;
		delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	std::cout << std::endl << CYAN << "-- Presidential Pardon Form --" << std::endl << std::endl << WHITE;
	try
	{
		Form* ppf;
		Bureaucrat Harold("Harold", 8);
		Bureaucrat Fergus("Fergus", 44);
		Bureaucrat Felicia("Felicia", 24);
		Bureaucrat Charmant("Charmant", 4);
		ppf = someRandomIntern.makeForm("presidential pardon", "Charmant");
		PresidentialPardonForm PresidentialPardon("Charmant");
		std::cout << std::endl << UBLU << "-- The intern created the form --" << std::endl << std::endl << WHITE;
		Fergus.signForm(*ppf);
		Felicia.signForm(*ppf);
		Harold.executeForm(*ppf);
		Charmant.executeForm(*ppf);
		std::cout << *ppf << std::endl;
		std::cout << std::endl << UBLU << "-- I created the Form --" << std::endl << std::endl << WHITE;
		Fergus.signForm(PresidentialPardon);
		Felicia.signForm(PresidentialPardon);
		Harold.executeForm(PresidentialPardon);
		Charmant.executeForm(PresidentialPardon);
		std::cout << PresidentialPardon << std::endl;
		delete (ppf);
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}

	std::cout << std::endl << CYAN << "-- Error Form --" << std::endl << std::endl << WHITE;
	Bureaucrat Fionaa("Fionaa", 4);
	try
	{
		Form* ef;	
		ef = someRandomIntern.makeForm("im an error", "Charmant");
		delete (ef);
	}
	catch(const std::exception& e)
	{
		std::cout <<  std::endl << RED << e.what() << std::endl <<  std::endl << WHITE;
	}
	return 0;
}