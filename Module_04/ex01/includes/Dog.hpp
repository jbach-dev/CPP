/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:16:08 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:51:35 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "Define.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog :public Animal{
public:
	Dog();
	virtual ~Dog(void);
	Dog (Dog const & src);
	Dog &operator=(Dog const & rhs);
	virtual void makeSound() const;
	virtual Brain	*getBrain(void) const;
	
private:
	Brain *_brain;
};

#endif