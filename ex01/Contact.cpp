/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:37:44 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/11 22:52:03 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact(){
	return;
}
Contact::~Contact(){
	return;
}
std::string	Contact::get_first() const{
	return first_name;
}
std::string	Contact::get_last() const{
	return last_name;
}
std::string Contact::get_nickname() const{
	return nickname;
}
std::string	Contact::get_phone_number() const{
	return phone_number;
}
std::string	Contact::get_dark_secret() const{
	return darkest_secret;
}

void	Contact::set_first(std::string first){first_name = first;}
void	Contact::set_last(std::string last){last_name = last;}
void	Contact::set_nickname(std::string nickn){nickname = nickn;}
void	Contact::set_phone_number(std::string ph_number){phone_number = ph_number;}
void	Contact::set_dark_secret(std::string dark_secret){darkest_secret = dark_secret;}

