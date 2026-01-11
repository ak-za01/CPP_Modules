/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:10:10 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/11 22:49:47 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	cmd;
	std::string	upper;

	std::cout << "Welcome to PhoneBook!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);

		if (std::cin.eof())
			break ;
		upper = to_uppercase(cmd);
		if (upper == "ADD")
			phonebook.ADD();
		else if (upper == "SEARCH")
			phonebook.SEARCH();
		else if (upper == "EXIT")
			break;
		else if (upper.empty())
			std::cout << "Invalid command. Use: ADD, SEARCH, or EXIT" << std::endl;
		phonebook.print_all();
	}
	std::cout << "Goodbye!" << std::endl;
	return 0;
}
