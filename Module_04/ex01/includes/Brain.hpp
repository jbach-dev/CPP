/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:57:43 by jbach             #+#    #+#             */
/*   Updated: 2022/10/27 09:45:06 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include "Define.hpp"
#include <string>
#include <iostream>

class Brain {
	private:
		std::string _idea[100];

	public:
		Brain();
		virtual ~Brain(void);
		Brain (Brain const & src);
		Brain &operator=(Brain const & rhs);
		std::string	getIdea(int index) const;
};

#endif