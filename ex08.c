/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:57:54 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/26 18:57:55 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
		printf("Please input function arguments...\n");
	else if (argc > 1 && argc < 5)
	{
		printf("Here are your arguments:\n");
		while (i < argc)
		{
			printf("%d: %s\n", i, argv[i]);
			i++;
		}
	}
	else
		printf("Too many arguments, limit input to 3...\n");
	return (0);
}
