/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:00:16 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/22 02:11:51 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"classes.hpp"

int main()
{
	PhoneBook book;
	std::string line;

	while (1)
	{
		if(!std::getline(std::cin, line))
		{
			if (std::cin.eof())
			{
				std::cout << "EOF detected. Exiting...";
				return (1);
			}
		}
		else if (line.empty())
			std::cout << "Field cannot be empty. Please try again.";
		else if (line == "ADD")
		{
			if (!book.add_contact())
				return (1);
		}
		else if (line == "SEARCH")
		{
			if (!book.print_all())
				return (1);
		}
		else if (line == "EXIT")
			break;
	}
	return (0);
}
