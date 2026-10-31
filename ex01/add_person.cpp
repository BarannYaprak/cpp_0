/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_person.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 23:10:51 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/31 02:01:08 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"classes.hpp"

static int set_string(std::string line, std::string* args);
static int set_nickname(std::string line, std::string* args);
static int set_number(std::string line, std::string* args);
static void print_prompt(int i);

int Contact::add_person()
{
	std::string line;

	for (int i = 0; i < 5;)
	{
		print_prompt(i);
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
		else if (i == 0)
			i += set_string(line, args[i]);
		else if (i == 1)
			i += set_string(line, args[i]);
		else if (i == 2)
			i += set_nickname(line, args[i]);
		else if (i == 3)
			i += set_number(line, args[i]);
		else if (i == 4)
			i += set_string(line, args[i]);
	}
	return (1);
}

static int	set_string(std::string line, std::string* args)
{
	int	i = 0;
	int j = 0;

	while(line[j] == ' ')
		j++;
	if (!line[j])
	{	
		std::cout << "Please enter alphabetic characters" << std::endl;
		return (0);
	}
	while (line[i])
	{
		if (line.length() == 1 && line[i] == ' ')
		{
				std::cout << "Please enter alphabetic characters" << std::endl;
				return (0);
		}
		if (!std::isalpha(line[i]) && line[i] != ' ')
		{	
				std::cout << "Please enter alphabetic characters" << std::endl;
				return (0);	
		}
		i++;	
	}
	*args = line;
	return (1);
}

static int	set_nickname(std::string line, std::string* args)
{
	*args = line;
	return (1);
}

static int	set_number(std::string line, std::string* args)
{
	int	i = 0;

	if (!(line.length() >= 11 && line.length() <= 13))
	{
		std::cout << "Please enter a valid number" << std::endl;
		return (0);
	}
	while (line[i])
	{
		if (!std::isdigit(line[i]))
		{
			if (i == 0 && line[i] == '+')
			{
				i++;
				continue;
			}
			std::cout << "Please enter a valid number" << std::endl;
			return (0);	
		}
		i++;	
	}
	*args = line;
	return (1);
}

static void print_prompt(int i)
{
	std::string prompts[5] =
	{
		"Please enter the First Name",
		"Please enter the Last Name",
		"Please enter the Nick Name",
		"Please enter the Phone Number",
		"Please enter the Darkest Secret"
	};
	std::cout << prompts[i] << ": ";
}
//+90530 109 35 03