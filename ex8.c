#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		printf("YOU HAVE NO ARGUMENTS!\nPlease input your arguments...\n");
	}
	else if (argc >= 2 && argc <= 4)
	{
		printf("Here are your arguments:\n");
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	else
	{
		printf("TOO MANY ARGUMENTS!\nYou suck!\n");
	}
	return 0;
}
