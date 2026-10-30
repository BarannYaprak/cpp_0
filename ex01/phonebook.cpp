/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:43:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/30 15:35:50 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"classes.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook()
{
	
}

int PhoneBook::add_contact()
{
	int result;

	result = members[count % 8].add_person();
	if (!result)
		return (0);
	count++;
	return (1);
}

int PhoneBook::print_all()
{
	std::string line;
		std::cout << std::setw(10) << "Index"
		<< '|' << std::setw(10) << "First Name"
		<< '|' << std::setw(10) << "Last Name"
		<< '|' << std::setw(10) << "Nickname" 
		<< "|   " << std::setw(10) << "Phone Number" << std::endl;
	std::cout <<"-----------------------------------------------------------"
		<< std::endl;
	for (int i = 0; i < count && i < 8; i++)
		members[i].print_member(i);
	std::cout << "Please enter the index of the contact to display: ";
	if (!std::getline(std::cin, line))
		return (0);
	else if (line.length() == 1)
	{
		if (std::isdigit(line[0]) && line[0] < '8')
			members[line[0] - '0'].print_detail(line[0] - '0');
		else
			std::cout << "Invalid index!\n";
	}
	else if (line.length() != 1)
		std::cout << "Invalid index!\n";
	return (1);
}
