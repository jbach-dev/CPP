/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:57:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::endl << CYAN << "-- Bureaucrat --" << std::endl << std::endl << WHITE;
	// try
	// {
		Bureaucrat Ane("L'âne", 146);
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
		Bureaucrat Shrek("Shrek", 3);
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
	std::cout << std::endl << CYAN << "-- Form --" << std::endl << std::endl << WHITE;
	try
	{
		Form Petition("La pétition", 100, 5);
		std::cout << Petition << std::endl;
		// Petition.beSigned(Shrek);
		Ane.signForm(Petition);
		Shrek.signForm(Petition);
		std::cout << Petition << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << std::endl << WHITE;
	}
	return 0;
}