/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:02:32 by debaxter          #+#    #+#             */
/*   Updated: 2019/10/30 13:02:33 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct	Person	{
	char	*name;
	int	age;
	int	height;
	int	weight;
};

struct Person*	Person_create(char *name, int age, int height, int weight)
{
	struct Person	*who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	return (who);
}

void		Person_destroy(struct Person *who)
{
	assert(who !=NULL);

	free(who->name);
	free(who);
}

void		Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int		main(int argc, char *argv[])
{
	// Make two PERSON data structures
	struct Person	*Bob = Person_create("Bob Belcher", 42, 64, 180);
	struct Person	*Frank = Person_create("Frank Moses", 50, 72, 165);

	if (argc > 1 || argv[1])
	{
		printf("ERROR: Function does not require input...\n");
		return (1);
	}
	// Print out structs and place in memory
	printf("Bob is at memory location %p:\n", Bob);
	Person_print(Bob);
	printf("------------------------------------\n");
	printf("Frank is at memory location %p:\n", Frank);
	Person_print(Frank);
	printf("------------------------------------\n");

	// Modify the data in the structures Bob and Frank
	Bob->age = 20;
	Bob->height -= 2;
	Bob->weight += 40;
	printf("MODIFIED BOB:\n");
	Person_print(Bob);
	printf("------------------------------------\n");

	Frank->age = 20;
	Frank->weight += 20;
	printf("MODIFIED FRANK:\n");
	Person_print(Frank);

	// Destroy them both to clean up memory
	Person_destroy(Bob);
	Person_destroy(Frank);
	return (0);
}
