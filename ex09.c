/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:57:59 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/26 18:58:00 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 25;
	if (argc == 1 || !argv[1])
		printf("Program input required...\n");
	else if (argc > 1 && argc < 5)
	{
		printf("BOMB DISARMED\n\n");
		printf("Please proceed, Agent Green-Dragon...\n");
	}
	else
	{
		while (i >= 0)
		{
			printf("%d ", i);
			i--;
		}
		printf("...BOOM!\n");
	}
	return (0);
}
