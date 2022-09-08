/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:26:46 by jbach             #+#    #+#             */
/*   Updated: 2022/09/06 21:27:09 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
#include <string>
# define GRN "\e[0;32m"
# define CYAN "\e[1;96m"
# define PURPLE "\e[1;95m"
# define BLUE "\e[1;94m"
# define RED "\e[1;91m"
# define WHITE "\e[0;37m"
# define BWHT "\e[1;37m"
# define UBLU "\e[4;34m"
# define YEL "\e[0;33m"
# define BGRN "\e[1;32m"

class Phonebook {
public:
	int		add_contact(void);
	void	search_contact(void);
	void	ft_display_book(void);
	void	ft_one_contact(int _index);
	Phonebook(void);
	~Phonebook(void);

private:
	Contact	_contact[8];
	int		_index;
	int	_supp;
	int		_nb_contact;
};

std::string ft_add_firstname(void);
std::string ft_add_lastname(void);
std::string ft_add_nickname(void);
std::string ft_add_phonenumber(void);
std::string ft_add_secret(void);


#endif