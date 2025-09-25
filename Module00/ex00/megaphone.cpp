#include <iostream>

static bool	print_uppercase_args(char **av)
{
   int	i, j;
   bool in_word, has_content;

	j = 0, has_content = false;
	while (av[++j])
	{
		i = -1, in_word = false;
		while (av[j][++i])
		{
			if ((av[j][i] == ' ' || (av[j][i] >= 9 && av[j][i] <= 13)) && in_word)
			{
				std::cout << ' ';
				in_word = false;
			}
			else if (av[j][i] != ' ' && !(av[j][i] >= 9 && av[j][i] <= 13))
			{
				std::cout << (char)std::toupper(av[j][i]);
				in_word = true;
				has_content = true;
			}
		}
		if (in_word)
			std::cout << ' ';
	}
	return (has_content);
}

int main(int ac, char *av[])
{
	if (ac == 1 || !print_uppercase_args(av))
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}
