#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 10;
	if (argc > 1 && argv[1])
	{
		printf("COUNTDOWN TERMINATED\nPlease run program again...\n");
	}
	else
	{
		while (i >= 0)
		{
			printf("%d\n", i);
			i--;
		}
		printf("BOOM!\nCountdown Complete...\n");
	}
	return 0;
}
