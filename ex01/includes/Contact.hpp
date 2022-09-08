/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:29:51 by jbach             #+#    #+#             */
/*   Updated: 2022/09/06 14:06:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include "Contact.hpp"
#include <string>

class Contact {
public:
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phonenumber(void) const;
	std::string	get_secret(void) const;
	void	set_firstname(std::string str);
	void	set_lastname(std::string str);
	void	set_nickname(std::string str);
	void	set_phonenumber(std::string str);
	void	set_secret(std::string str);
	Contact(void);
	~Contact(void);

private:
	std::string	_firstname;
	std::string _lastname;
	std::string	_nickname;
	std::string	_phonenumber;
	std::string	_secret;
};

#endif