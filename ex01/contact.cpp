/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:01:27 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/22 13:12:36 by byaprak          ###   ########.fr       */
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
}

Contact::~Contact(void)
{
}

int Contact::add_person()
{
	std::string line;
	std::string prompts[5] =
	{
		"Please enter the First Name",
		"Please enter the Last Name",
		"Please enter the Nick Name",
		"Please enter the Phone Number",
		"Please enter the Darkest Secret"
	};
	for (int i = 0; i < 5;)
	{
		std::cout << prompts[i] << ": ";
		if(!std::getline(std::cin, line))
		{
			if (std::cin.eof())
			{
				std::cout << "EOF detected. Exiting...";
				return (0);
			}
		}
		else if (line.empty())
			std::cout << "Field cannot be empty. Please try again.";
		else
		{
			*args[i] = line;		
			i++;
		}
	}
	return (1);
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

	std::cout << std::setw(10) << "Index"
		<< '|' << std::setw(10) << "First Name"
		<< '|' << std::setw(10) << "Last Name"
		<< '|' << std::setw(10) << "Nickname" 
		<< '|' << std::setw(10) << "Phone Number" 
		<< '|' << std::setw(10) << "Darkest secret" << std::endl;
	std::cout <<"---------------------------------------------------------"
		<< std::endl;
	std::cout << std::setw(10) << index 
		<< '|' << std::setw(10) << firstname
		<< '|' << std::setw(10) << lastname
		<< '|' << std::setw(10) << nickname
		<< '|' << std::setw(10) << phone_number 
		<< '|' << std::setw(10) << darkest_secret << std::endl;
}
