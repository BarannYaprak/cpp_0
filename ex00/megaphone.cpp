#include<iostream>

int main(int ac, char **av)
{
	int i = 0;
	av++;
	while(*av)
	{
		while(**av)
		{
			if (**av >= 'a' && **av <= 'z')
			{
				std::cout << ((char)(**av - 32));
			}
			else
			{
				std::cout << (**av);
			}
			(*av)++;
		}
		std::cout << ' ';
		av++;
	}
	std::cout << '\n';
}