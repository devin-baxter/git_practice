/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:17 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:18 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

// Forward Function DECLARATIONS
int	can_print(char ch);
void	print_arguments(int argc, char *argv[]);
void	print_letters(char arg[]);

void	print_arguments(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		print_letters(argv[i]);
		i++;
	}
}

void	print_letters(char arg[])
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		char	ch;

		ch = arg[i];
		if (can_print(ch))
			printf("'%c' == %d\n", ch, ch);
		i++;
	}
}

int	can_print(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int	main(int argc, char *argv[])
{
	print_arguments(argc+1, argv);
	return (0);
}
