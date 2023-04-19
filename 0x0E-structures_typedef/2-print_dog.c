#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of a dog structure
 * @d: pointer to the dog structure
 *
 * Description: long
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}