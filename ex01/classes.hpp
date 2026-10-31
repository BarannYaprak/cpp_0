/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byaprak <byaprak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:04:36 by byaprak           #+#    #+#             */
/*   Updated: 2026/10/31 17:57:54 by byaprak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include<iostream>
#include<iomanip>

#define RED		"\033[0;31m"
#define YELLOW	"\033[0;33m"
#define CYAN	"\033[0;36m"
#define GREEN	"\033[0;32m"
#define RESET	"\033[0m"
#define PURPLE	"\033[0;35m"

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string* args[5];
	public:
		Contact();
		int add_person();
		void print_member(int index);
		void print_detail(int index);
		~Contact();
};

class PhoneBook
{
	private:
		Contact members[8];
		int		count;
	public:
		PhoneBook();
		int add_contact();
		int print_all();
		~PhoneBook();
};