/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:18:24 by jbach             #+#    #+#             */
/*   Updated: 2022/10/26 19:26:08 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "Define.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"
#include <string>
#include <iostream>

class Cat :public AAnimal{
public:
	Cat();
	virtual ~Cat(void);
	Cat (Cat const & src);
	Cat &operator=(Cat const & rhs);
	virtual void makeSound() const;
	Brain	*getBrain(void) const;
private:
	Brain *_brain;
};

#endif