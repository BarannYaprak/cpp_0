#include<iostream>
#include<ctype.h>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	av++;
	while (*av)
	{
		while(**av)
		{
			if (**av >= 'a' && **av <= 'z')
				std::cout << (char)toupper(**av);
			
			else
				std::cout << (**av);
			(*av)++;
		}
		av++;
		if (*av)
			std::cout << ' ';
	}
	std::cout << '\n';
	return (0);
}
