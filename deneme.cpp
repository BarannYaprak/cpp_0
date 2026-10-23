
#include<string>
#include<iostream>
#include<ex01/classes.hpp>
int main()
{
	std::string line;
	std::cout << "input girin\n";
	std::getline(std::cin, line);
	if (line.empty())
		std::cout << "boş input olmaz\n";
	if (std::cin.eof())
		std::cout << "ctrl+D ile input olmaz\n";
	std::cout << "Girdiğiniz input: " << line << '\n';
	return (0);
}