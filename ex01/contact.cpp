/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:01:27 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/31 17:55:52 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"classes.hpp"

Contact::Contact(void)
	:	firstname(""),
		lastname(""),
		nickname(""),
		phone_number(""),
		darkest_secret("")
{
	
    this->args[0] = &this->firstname;
    this->args[1] = &this->lastname;
    this->args[2] = &this->nickname;
    this->args[3] = &this->phone_number;
    this->args[4] = &this->darkest_secret;
}

Contact::~Contact(void)
{
}

void Contact::print_member(int index)
{
	std::cout << YELLOW << std::setw(10) << index  << RESET << GREEN << '|' << RESET;
	for (int i = 0; i < 4; i++)
	{
		if (i == 3)
			std::cout << YELLOW << "  " << (*args[i]).substr(0, 9) + '.' << RESET;
		else if ((*args[i]).length() > 10)
			std::cout << YELLOW << (*args[i]).substr(0, 9) + '.' << RESET;
		else
			std::cout << YELLOW << std::setw(10) << *args[i] << RESET;
		std::cout << GREEN << "|" << RESET;
		if(i == 3)
			std::cout << '\n';
	}
}

void Contact::print_detail(int index)
{
	std::cout << YELLOW << "Index: " << CYAN << index << '\n'
		<< YELLOW << "First Name: " << CYAN << firstname << '\n'
		<< YELLOW << "Last Name: " << CYAN << lastname << '\n'
		<< YELLOW << "Nickname: "  << CYAN << nickname << '\n'
		<< YELLOW << "Phone Number: "  << CYAN << phone_number << '\n'
		<< YELLOW << "Darkest secret: " << CYAN << darkest_secret << RESET << std::endl;
}
