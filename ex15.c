/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:21 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:24 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	// Create TWO arrays we care about
	int	ages[] = { 21, 25, 30, 42, 88 };
	char	*names[] = { "Joe", "Bob", "Devin", "Chris", "Agnes" };
	// SAFELY get the size of ages[]
	int	count = sizeof(ages) / sizeof(int);
	int	i = 0;

	if (argc != 1 || argv[1])
	{
		printf("ERROR: Program does not require input\n");
		return (1);
	}

	// FIRST WAY: Array Indexing
	while (i < count)
	{
		printf("%s is %d years old.\n", names[i], ages[i]);
		i++;
	}
	printf("-----\n");

	// Set pointers to start of the arrays
	int	*cur_age = (int *)ages;
	char **cur_name = names;
	i = 0;

	// SECOND WAY: Using pointers
	while (i < count)
	{
		printf("%s is %d years old.\n",
				*(cur_name + i), *(cur_age + i));
		i++;
	}
	printf("-----\n");
	i = 0;

	// THIRD WAY: Pointers are just Arrays
	while (i < count)
	{
		printf("%s is %d years old...again.\n",
				cur_name[i], cur_age[i]);
		i++;
	}
	printf("-----\n");

	// FOURTH WAY: Pointers but stupid and complex
	cur_name = names;
	cur_age = ages;

	while ((cur_age - ages) < count)
	{
		printf("%s has lived %d years so far...\n",
				*cur_name, *cur_age);
		cur_name++;
		cur_age++;
	}
	return (0);
}
