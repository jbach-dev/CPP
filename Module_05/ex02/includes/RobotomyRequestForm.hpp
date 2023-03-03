/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:02:25 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:40:41 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
#include "Define.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

class Form;

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);
	RobotomyRequestForm (RobotomyRequestForm const & src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
	void	execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif