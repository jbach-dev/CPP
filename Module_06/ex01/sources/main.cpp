/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:14:31 by jbach             #+#    #+#             */
/*   Updated: 2022/11/07 18:30:57 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Define.hpp"
#include "Data.hpp"

int main()
{
	Data *ptr = new Data;
	ptr->myNb = 4;
	std::cout << YEL << "before serialisation : " << BWHT << ptr << std::endl << RESET;
	std::cout << YEL << "after serialisation  : " << BWHT << deserialize(serialize(ptr)) << std::endl << RESET;
	delete ptr;
	Data *deuxieme = new Data;
	deuxieme->myNb = 15;
	std::cout << std::endl<< YEL << "before serialisation : " << BWHT << deuxieme << std::endl << RESET;
	std::cout << YEL << "after serialisation  : " << BWHT << deserialize(serialize(deuxieme)) << std::endl << RESET;
	delete deuxieme;
}