/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:52:30 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/11 22:48:35 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int		count;
		int		index;

	public:
		PhoneBook();
		int		get_count();
		int		get_index();
		void	ADD();
		void	SEARCH();
		void	print_all() const;
		~PhoneBook();
};

std::string	to_uppercase(std::string str);
int	read_field(Contact &c, const std::string &prompt,
				void (Contact::*setter)(std::string));

#endif
