/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:57:45 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/26 18:57:46 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	distance = 100;
	float	power = 88.8f;
	double	super_power = 4.0000;
	char	first_name[] = "Devin";
	char	middle_name[] = "Robert";
	char	last_name[] = "Baxter";
	char	code_name[] = "Green-Dragon";
	int	bugs = 100;
	double	bug_rate = 2.8;
	long	universe_of_defects = 1L * 1024L * 1024L * 1024L;
	double	expected_bugs = bugs * bug_rate;
	double	part_of_universe = expected_bugs / universe_of_defects;
	char	nul_byte = '\0';
	int	care_perc = bugs * nul_byte;

	if (argc > 1 || argv[1])
	{
		printf("Input FIRST and LAST NAME followed by CODENAME...\n");
		return (1);
	}
	printf("NSA SECURE ACCESS LOGIN\n");
	printf("Welcome, %s\n", first_name);
	printf("You are %d miles away from your mission site\n", distance);
	printf("Armored-Suit power level at %.2f\n", power);
	printf("You have %f special enhancements available for use\n", super_power);
	printf("Your first name is %s\n", first_name);
	printf("Your middle name is %s\n", middle_name);
	printf("Your last name is %s\n", last_name);
	printf("Your NSA AGENT Code-Name is %s\n", code_name);
	printf("ERROR: BUGS DETECTED\n");
	printf("You have %d bugs at the imaginary rate of %f\n", bugs, bug_rate);
	printf("The ENTIRE universe has %ld bugs\n", universe_of_defects);
	printf("You are expected to have %f bugs\n", expected_bugs);
	printf("That is only a %e portion of the whole universe\n", part_of_universe);
	printf("Which means you should care %d%%\n", care_perc);
	printf("GOODBYE Agent %s...\n", code_name);
	return (0);
}
