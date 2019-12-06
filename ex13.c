/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:09 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:10 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	num_states;
	char	*states[] = {
		"Alaska", "Washington", "Oregon", "California" };

	i = 1;
	num_states = 4;
	if (argc == 1)
	{
		printf("ERROR: Function requires up to 3 arguments...\n");
		return (1);
	}
	if (argc > 4)
	{
		printf("ERROR: TOO MANY ARGUMENTS\n");
		return (1);
	}
	// Go through each string in argv
	// Why do we skip argv[0]?
	while (i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	i = 0;
	while (i < num_states)
	{
		printf("State %d: %s\n", i+1, states[i]);
		i++;
	}
	return (0);
}
