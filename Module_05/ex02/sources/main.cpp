/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:39:23 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

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
	std::cout << std::endl << CYAN << "-- Form Shrubbery Creation Form --" << std::endl << std::endl << WHITE;
	try
	{
		Bureaucrat Fiona("Fiona", 148);
		Bureaucrat Farquaad("Farquaad", 138);
		Bureaucrat Gingerbread("Gingerbread", 135);
		Bureaucrat Chat("Chat", 137);
		ShrubberyCreationForm Shrubbery("Charmant");
		Fiona.signForm(Shrubbery);
		Chat.signForm(Shrubbery);
		Farquaad.executeForm(Shrubbery);
		Gingerbread.executeForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	std::cout << std::endl << CYAN << "-- Form Robotomy Request Form --" << std::endl << std::endl << WHITE;
	try
	{
		Bureaucrat Fergus("Fergus", 44);
		Bureaucrat Furckle("Furckle", 72);
		Bureaucrat Chat("Chat", 137);
		RobotomyRequestForm Robotomy("Charmant");
		Chat.signForm(Robotomy);
		Furckle.signForm(Robotomy);
		Furckle.executeForm(Robotomy);
		Fergus.executeForm(Robotomy);
		std::cout << Robotomy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	std::cout << std::endl << CYAN << "-- Form Presidential Pardon Form --" << std::endl << std::endl << WHITE;
	try
	{
		Bureaucrat Harold("Harold", 8);
		Bureaucrat Fergus("Fergus", 44);
		Bureaucrat Felicia("Felicia", 24);
		Bureaucrat Charmant("Charmant", 4);
		PresidentialPardonForm PresidentialPardon("Charmant");
		Fergus.signForm(PresidentialPardon);
		Felicia.signForm(PresidentialPardon);
		Harold.executeForm(PresidentialPardon);
		Charmant.executeForm(PresidentialPardon);
		std::cout << PresidentialPardon << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	return 0;
}