/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anktiri <anktiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:06:37 by anktiri           #+#    #+#             */
/*   Updated: 2026/01/12 20:31:55 by anktiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>


class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact();
		std::string	get_first() const;
		std::string	get_last() const;
		std::string	get_nickname() const;
		std::string	get_phone_number() const;
		std::string	get_dark_secret() const;
		void	set_first(std::string first);
		void	set_last(std::string last);
		void	set_nickname(std::string nickn);
		void	set_phone_number(std::string ph_number);
		void	set_dark_secret(std::string dark_secret);
		~Contact();
};

#endif