/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 00:20:26 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/12 21:13:51 by anktiri          ###   ########.fr       */
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
	if (count == 0){
		std::cout << "PhoneBook is empthy!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int a = 0; a < count; a++){
		std::cout << std::setw(10) << a << "|";
		std::string first = contact[a].get_first();
		if (first.length() > 10)
			std::cout << first.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << first << "|";
		std::string last = contact[a].get_last();
		if (last.length() > 10)
			std::cout << last.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << last << "|";
		std::string nick = contact[a].get_nickname();
		if (nick.length() > 10)
			std::cout << nick.substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << nick << "|" << std::endl;	
	}
	std::cout << "Enter index to display: ";
	int	indx;
	std::cin >> indx;

	if (std::cin.fail() || indx < 0 || indx >= count)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	std::cin.ignore(10000, '\n');

	std::cout << "\n--- Contact Deatails ---" << std::endl;
	std::cout << "First Name: " << contact[indx].get_first() << std::endl;
	std::cout << "First Last: " << contact[indx].get_last() << std::endl;
	std::cout << "Nickname: " << contact[indx].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact[indx].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact[indx].get_dark_secret() << std::endl;
}
