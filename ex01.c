/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:53:19 by drbaxter          #+#    #+#             */
/*   Updated: 2019/10/26 18:58:09 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* This is a comment */
int	main(int argc, char *argv[])
{
	int	distance;

	distance = 100;
	if (argv[1] || argc > 1)
	{
		printf("Function does not require arguments\n");
		return (1);
	}
	// This is also a comment
	printf("You are %d miles away.\n", distance);

	return (0);
}
