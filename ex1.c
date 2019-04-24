#include <stdio.h>

/* This is a comment */
int	main(int argc, char *argv[])
{
	int	distance;
	int	i;
	int	c;

	distance = 100;
	i = 1;
	c = 0;
	// this is also a comment
	if (argc == 1)
	{
		printf("You are %d miles away.\n", distance);
	}
	else if (argc >= 2 && argc <= 11)
	{
		while (i < argc)
		{
		
			while (argv[i][c] != '\0')
			{
				printf("%c\n", argv[i][c]);
				c++;
			}
			printf("%s\n\n", argv[i]);
			c = 0;
			i++;
		}
	}
	else
	{
		printf("Too much data...\nPlease input fewer arguments...\n");
	}
	return 0;
}
