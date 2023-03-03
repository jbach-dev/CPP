/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:40:59 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:27:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	ClapTrap Bloom("Bloom");
	ClapTrap Darcy("Darcy");
	Bloom.attack("Darcy");
	Darcy.takeDamage(5);
	Darcy.beRepaired(15);
	return (1);
}