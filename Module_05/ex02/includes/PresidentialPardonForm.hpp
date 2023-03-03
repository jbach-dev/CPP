/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:23:46 by jbach             #+#    #+#             */
/*   Updated: 2022/11/02 19:40:37 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "Define.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);
	PresidentialPardonForm (PresidentialPardonForm const & src);
	PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
	void	execute(Bureaucrat const & executor) const;
private:
	std::string _target;
};

#endif