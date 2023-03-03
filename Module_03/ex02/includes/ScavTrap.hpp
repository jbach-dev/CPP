/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:09 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:15:24 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap (ScavTrap const & src);
		ScavTrap &operator=(ScavTrap const & rhs);
		void attack(const std::string& target);
		void guardGate();
};

#endif