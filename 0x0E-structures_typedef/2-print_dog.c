#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *  print_dog - a
 *@d: pointer.
 */

void print_dog(struct dog *d)
{

if (d != NULL)
{

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);


	if (d->name == NULL && d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
	}

}



}
