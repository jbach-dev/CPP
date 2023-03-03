/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:40:17 by jbach             #+#    #+#             */
/*   Updated: 2022/10/25 19:15:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap (FragTrap const & src);
		FragTrap &operator=(FragTrap const & rhs);
		void highFivesGuys();
};

#endif