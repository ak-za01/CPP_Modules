/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:51:29 by marvin            #+#    #+#             */
/*   Updated: 2025/10/24 17:51:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int a;
	int	b;

	a = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[a])
		{
			b = 0;
			while (av[a][b])
			{
				std::cout << (char)(std::toupper(av[a][b]));
				b++;
			}
			a++;
		}
		std::cout << std::endl;
	}
    return 0;
}
