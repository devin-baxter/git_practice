#include <stdio.h>

void	ft_crash()
{
	char *test = NULL;
	int i = 0;

	while (i < 100000000)
	{
		printf("%c", test[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	age = 30;
	int	height = 62;

	if (argc > 1 && argv[1])
	{
		printf("ERROR: Program does not require arguments\n");
	}
	else
	{
		printf("I am %d years old.\n", age);
		printf("I am %d inches tall.\n", height);
		ft_crash();
		ft_crash();
		ft_crash();
		ft_crash();
		ft_crash();
		ft_crash();
		ft_crash();
	}
	return 0;
}
