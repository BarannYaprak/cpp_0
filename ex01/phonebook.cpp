/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:43:29 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/31 18:00:07 by byaprak          ###   ########.fr       */
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
		std::cout << RED << std::right << std::setw(10) << "Index"
		<< GREEN << '|' << RED << std::right << std::setw(10) << "First Name"
		<< GREEN << '|' << RED << std::right << std::setw(10) << "Last Name"
		<< GREEN << '|' << RED << std::right << std::setw(10) << "Nickname"
		<< GREEN << "|" << RED << std::right  << std::setw(10) << "Phone Number"
		<< GREEN << '|' << RESET << std::endl;
	std::cout << CYAN << "----------" << GREEN << '|' << CYAN << "----------"
		<< GREEN << '|' << CYAN << "----------" << GREEN << '|' << CYAN << "----------" 
		<< GREEN << '|'  << CYAN << "------------" << GREEN << '|'
		<< RESET << std::endl;
	for (int i = 0; i < count && i < 8; i++)
		members[i].print_member(i);
	std::cout << PURPLE << "Please enter the index of the contact to display: " << RESET;
	if (!std::getline(std::cin, line))
		return (0);
	else if (line.length() == 1)
	{
		if (std::isdigit(line[0]) && line[0] < '8')
			members[line[0] - '0'].print_detail(line[0] - '0');
		else
			std::cout << RESET << "Invalid index!" << RESET << '\n';
	}
	else if (line.length() != 1)
		std::cout << PURPLE << "Invalid index!" << RESET << '\n';
	return (1);
}
