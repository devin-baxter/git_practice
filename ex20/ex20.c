#include "dbg.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/** Our old friend the DIE function from ex17 */
void		die(const char *message)
{
	if (errno)
		perror(message);
	else
		printf("ERROR: %s\n", message);
	exit (1);
}

// A TYPEDEF creates a fake type, in this case
// for a FUNCTION POINTER
typedef	int	(*compare_cb)(int a, int b);

/**
 * A classic bubble sort fucntion that uses the
 * COMPARE_CB to do the sorting
 */
int		*bubble_sort(int *numbers, int count, compare_cb cmp)
{
	int	temp = 0;
	int	i = 0;
	int	j = 0;
	int	*target = malloc(count * sizeof(int));

	if (!target)
		die("Memory error...");
	memcpy(target, numbers, count * sizeof(int));
	while (i < count)
	{
		j = 0;
		while (j < count - 1)
		{

			if (cmp(target[j], target[j + 1]) > 0)
			{
				temp = target[j + 1];
				target[j + 1] = target[j];
				target[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (target);
}

int		sorted_order(int a, int b)
{
	return (a - b);
}

int		reverse_order(int a, int b)
{
	return (b - a);
}

int		strange_order(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return (0);
	}
	else
	{
		return (a % b);
	}
}

/*
 * This function tests that we are sorting things correctly
 * by doing the sort and printing it out
 */
void		test_sorting(int *numbers, int count, compare_cb cmp)
{
	int	i = 0;
	int	*sorted = bubble_sort(numbers, count, cmp);

	if (!sorted)
		die("Failed to sort as requested.");

	while (i < count)
	{
		printf("%d ", sorted[i]);
		i++;
	}
	printf("\n");

	free(sorted);
}

void		destroy(compare_cb cmp)
{
	int		i = 0;
	unsigned char	*data = (unsigned char *)cmp;
	debug("data is %p:%s", data, data);

	while (i < 1)
	{
		data[i] = i;
		i++;
	}
	printf("\n");
}

void		dump(compare_cb cmp)
{
	int	i = 0;

	check(cmp != NULL, "Invalid function ptr to dump.");
	unsigned char	*data = (unsigned char *)cmp;

	while (i < 64)
	{
		printf("%02x:", data[i]);
		debug("Assigning %d to data(%d) at %p", i, sizeof(data), i);
		i++;
	}
	printf("\n");
error:
	printf("\n");
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
		die("USAGE: ex18 1 2 3 4 5");

	int	count = argc - 1;
	int	i = 0;
	char	**inputs = argv + 1;
	int	*numbers = malloc(count * sizeof(int));

	if (!numbers)
		die("Memory error.");
	while (i < count)
	{
		numbers[i] = atoi(inputs[i]);
		i++;
	}

	test_sorting(numbers, count, sorted_order);
	test_sorting(numbers, count, reverse_order);
	test_sorting(numbers, count, strange_order);

	free(numbers);

	printf("SORTED:");
	debug("Calling dump with %p", sorted_order);
	dump(sorted_order);
	
	debug("Calling destroy with %p", sorted_order);
	destroy(sorted_order); // Make program go kaboom!
	
	printf("SORTED:");
	debug("Calling dump with %p", sorted_order);
	dump(sorted_order);

	return (0);
}
