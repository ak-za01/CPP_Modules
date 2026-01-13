/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:26:46 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/13 17:13:49 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string to_uppercase(std::string str){
	int	lenght = (int)(str.length());
	for (int i = 0; i < lenght; i++){
		str[i] = (char)(std::toupper(str[i]));
	}
    return str;
}

int	read_field(Contact &c, 
		const std::string &prompt, void (Contact::*setter)(std::string))
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!std::cin)
			return 1;
		if (!input.empty())
			break;
		std::cout << "Error: Field cannot be empty!" << std::endl;
	}
	(c.*setter)(input);
	return 0;
}
