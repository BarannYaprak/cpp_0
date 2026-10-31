/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:01:27 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/31 01:42:30 by byaprak          ###   ########.fr       */
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
	std::cout << std::setw(10) << index << '|';
	for (int i = 0; i < 4; i++)
	{
		if ((*args[i]).length() > 10)
			std::cout << (*args[i]).substr(0, 9) + '.';
		else
			std::cout << std::setw(10) << *args[i];
		std::cout << "|";
		if(i == 3)
			std::cout << '\n';
	}
}

void Contact::print_detail(int index)
{
	std::cout << "Index: " << index << '\n'
		<< "First Name: " << firstname << '\n'
		<< "Last Name: " << lastname << '\n'
		<< "Nickname: "  << nickname << '\n'
		<< "Phone Number: "  << phone_number << '\n'
		<< "Darkest secret: " << darkest_secret << std::endl;
}
