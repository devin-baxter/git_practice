/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:00 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:01 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	numbers[4] = { 0 };
	char	name[4] = { 'a' };

	if (argc > 1 || argv[1])
	{
		printf("ERROR: No arguments required\n");
		return (1);
	}
	// First, print them out raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
			numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2],
			name[3]);
	// Setup the int array
	numbers[0] = 1;
	numbers[1] = 8;
	numbers[2] = 42;
	numbers[3] = 1024;
	// Setup the char array
	name[0] = '$';
	name[1] = 'D';
	name[2] = 'B';
	name[3] = '$';

	// Then print out the initialized arrays
	printf("NUMBERS: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
			numbers[3]);
	printf("I AM %c %c.%c. %c\n", name[0], name[1], name[2],
			name[3]);
	// Print the char array like a string
	printf("NAME: %s\n", name);
	// Another way to print name
	char *another = "Devin";

	printf("Another way: %s\n", another);
	printf("EACH Another: %c %c %c %c %c\n", another[0], another[1],
			another[2], another[3], another[4]);
	return (0);
}
