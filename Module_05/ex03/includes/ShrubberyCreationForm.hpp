/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:02:25 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:41:26 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include "Define.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>

class Form;

class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm (ShrubberyCreationForm const & src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);
	void	execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif