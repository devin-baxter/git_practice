/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:57:21 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/26 18:57:22 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	age = 30;
	int	height = 62;

	if (argv[1] || argc > 1)
	{
		printf("Function does not require arguments\n");
		return (1);
	}
	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	return (0);
}
