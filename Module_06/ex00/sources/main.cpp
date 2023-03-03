/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:04 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:33:11 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	try{
		Conversion(argc, argv);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}