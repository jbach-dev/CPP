/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:18:24 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:51:23 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "Define.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat :public Animal{
public:
	Cat();
	virtual ~Cat(void);
	Cat (Cat const & src);
	Cat &operator=(Cat const & rhs);
	virtual void makeSound() const;
	virtual Brain	*getBrain(void) const;
private:
	Brain *_brain;
};

#endif