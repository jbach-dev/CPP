/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:31 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:51:18 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include "Define.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal {
public:
	Animal();
	virtual ~Animal(void);
	Animal (Animal const & src);
	Animal &operator=(Animal const & rhs);
	virtual void makeSound() const;
	std::string	getType(void) const;
	virtual Brain	*getBrain(void) const = 0;

protected:
	std::string _type;
};

#endif