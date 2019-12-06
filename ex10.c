/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:01:54 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:01:55 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	letter;

	i = 0;
	if (argc != 2 || !argv[1])
	{
		printf("ERROR: Function requires one argument.\n");
		// This is how you abort a program
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		letter = argv[1][i];

		switch (letter)
		{
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i+1);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i+1);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i+1);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i+1);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i+1);
				break;

			case 'y':
			case 'Y':
				if (i > 2)
				{
					printf("%d: 'Y'\n", i+1);
				}
				break;

			case '.':
			case ',':
			case '!':
			case ' ':
				printf("%d:\n", i+1);
				break;

			default:
				printf("%d: %c is not a vowel\n", i+1, letter);
				break;
		}
		i++;
	}
	return (0);
}
