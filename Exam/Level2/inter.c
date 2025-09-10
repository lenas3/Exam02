#include <unistd.h>

int	ft_in_str(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int	ft_already_printed(char *s, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_in_str(argv[2], argv[1][i])
				&& !ft_already_printed(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
