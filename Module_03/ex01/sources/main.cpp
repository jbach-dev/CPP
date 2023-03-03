/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:40:59 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 16:37:36 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	ScavTrap Bloom("Bloom");
	Bloom.attack("Darcy");
	Bloom.guardGate();
	Bloom.beRepaired(5);
	Bloom.takeDamage(15);
	return (1);
}