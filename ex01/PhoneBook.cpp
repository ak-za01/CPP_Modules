/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 00:20:26 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/11 22:49:12 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	count = 0;
	index = 0;
}

PhoneBook::~PhoneBook(){
}

int	PhoneBook::get_count(){
	return count;
}

int	PhoneBook::get_index(){
	return index;
}

void	PhoneBook::ADD()
{
	std::string	input;
	int			pos;

	pos = index % 8;
	if (read_field(contact[pos], "enter your first name: ", &Contact::set_first))
		return;
	if (read_field(contact[pos], "enter your last name: ", &Contact::set_last))
		return;
	if (read_field(contact[pos], "enter your nickname: ", &Contact::set_nickname))
		return;
	if (read_field(contact[pos], "enter your phone number: ", &Contact::set_phone_number))
		return;
	if (read_field(contact[pos], "enter your darkest secret: ", &Contact::set_dark_secret))
		return;
	index++;
	if (count < 8)
		count++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::SEARCH()
{
	std::cout << "You entered 'SEARCH'\n";
	return ;
}

void	PhoneBook::print_all() const
{
	int	i;

	i = 0;
	std::cout << "===== PHONEBOOK DEBUG =====" << std::endl;
	while (i < count)
	{
		std::cout << "Index [" << i << "]" << std::endl;
		std::cout << "  First name      : " << contact[i].get_first() << std::endl;
		std::cout << "  Last name       : " << contact[i].get_last() << std::endl;
		std::cout << "  Nickname        : " << contact[i].get_nickname() << std::endl;
		std::cout << "  Phone number    : " << contact[i].get_phone_number() << std::endl;
		std::cout << "  Darkest secret  : " << contact[i].get_dark_secret() << std::endl;
		std::cout << "---------------------------" << std::endl;
		i++;
	}
}
