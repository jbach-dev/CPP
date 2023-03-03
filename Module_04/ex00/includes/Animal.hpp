/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:31 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:39:00 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include "Define.hpp"
#include <string>
#include <iostream>

class Animal {
public:
	Animal(void);
	virtual ~Animal(void);
	Animal (Animal const & src);
	Animal &operator=(Animal const & rhs);
	virtual void makeSound() const;
	std::string	getType(void) const;


protected:
	std::string _type;
};

#endif