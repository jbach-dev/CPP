/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:14:31 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:30:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Define.hpp"
#include "Base.hpp"

Base * generate(void)
{
	Base *base;
	int random = (rand() % 3) + 1;
	switch (random)
	{
		case (1):
		{
			base = new A;
			std::cout << YEL << "a A class was created" << std::endl << RESET;
			break;
		}
		case (2):
		{
			base = new B;
			std::cout << YEL << "a B class was created" << std::endl<< RESET;
			break;
		}
		case (3):
		{
			base = new C;
			std::cout << YEL << "a C class was created" << std::endl<< RESET;
			break;
		}
	}
	return base;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>  (p) != NULL)
		std::cout << BLUE << "This is a A class" << std::endl << RESET;
	else if (dynamic_cast<B *>  (p) != NULL)
		std::cout << BLUE << "This is a B class" << std::endl << RESET;
	else if (dynamic_cast<C *>  (p) != NULL)
		std::cout << BLUE << "This is a C class" << std::endl << RESET;
}


void identify(Base& p)
{
	try
	{
		dynamic_cast<A &>(p);
	}
	catch (std::exception &e)
	{
		try
		{
			dynamic_cast<B &>(p);
		}
		catch (std::exception &e)
		{
			try
			{
				dynamic_cast<C &>(p);
			}
			catch (std::exception &e)
			{
				std::cout << BLUE << "This is none of the class" << std::endl << RESET;
			}
			std::cout << BLUE << "This is a C class" << std::endl << RESET;
			return ;
		}
		std::cout << BLUE << "This is a B class" << std::endl << RESET;
		return ;
	}
	std::cout << BLUE << "This is a A class" << std::endl << RESET;
	return ;
}

int main()
{
	std::cout  << std::endl<< GRN << "--- Identify function 1 ---" << std::endl << std::endl << RESET;
	for (int i = 0; i < 5; i++)
	{
		Base *base = generate();
		identify(base);
		delete base;
	}
	std::cout << std::endl << GRN << "--- Identify function 2 ---" << std::endl << std::endl << RESET;
	for (int i = 0; i < 5; i++)
	{
		Base *base = generate();
		identify(*base);
		delete base;
	}
}