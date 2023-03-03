/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:36:12 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:16:55 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include "Define.hpp"
#include <string>
#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap (ClapTrap const & src);
	ClapTrap &operator=(ClapTrap const & rhs);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string _name;
	int	_hit_point;
	int	_energy_point;
	int	_attack_damage;

};

#endif