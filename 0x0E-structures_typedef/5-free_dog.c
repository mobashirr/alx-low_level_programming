#include "dog.h"

/**
 * free_dog - free dog_t struct
 *@d: pointer to 
 *
 */


void free_dog(dog_t *d)
{

if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);

}






}
