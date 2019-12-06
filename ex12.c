/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:05 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:06 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	areas[] = { 10, 12, 13, 14, 20 };
	int	areas_size = sizeof(areas) / sizeof(int);

	int	i = 0;
	int	c = 0;
	char	name[] = "Devin";
	char	full_name[] = { 'D', 'e', 'v', 'i', 'n',
		' ', 'R', '.', ' ',
		'B', 'a', 'x', 't', 'e', 'r', }; // Total = 16 CHAR [0] - [14]
	int	fname_size = sizeof(full_name) / sizeof(char);

	if (argc > 1 || argv[1])
	{
		printf("ERROR: Function does not require input\n");
		return (1);
	}
	// WARNING: On some systems you may have to use a %u or %lu instead of
	// a %ld in this code due to the sizeof() return type
	printf("The size of an INT = %lu\n", sizeof(int));
	printf("The size of INT areas[] = %lu\n", sizeof(areas));
	printf("The number of INTS in areas[] = %lu\n",
			sizeof(areas) / sizeof(int));
	while (i < areas_size)
	{
		printf("INT areas[%d] = %d\n", i, areas[i]);
		i++;
	}
	printf("The size of a CHAR = %lu\n", sizeof(char));
	printf("The size of CHAR name[] = %lu\n", sizeof(name));
	printf("The size of full_name = %lu\n", sizeof(full_name));
	printf("The number of CHAR's in full_name = %lu\n",
			sizeof(full_name) / sizeof(char));
	while (c < fname_size)
	{
		printf("full_name[%d] = %c\n", c, full_name[c]);
		c++;
	}

	//full_name[15] = 'X';

	printf("name = \"%s\" and full_name = \"%s\"\n", name, full_name);
	printf("\n\nEND OF PROGRAM...\n\n");
	return (0);
}
